/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <srapaila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 09:48:28 by srapaila          #+#    #+#             */
/*   Updated: 2025/02/27 15:31:37 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_start_process(char *av, char **env)
{
	pid_t		pid;
	int			fd[2];

	if (pipe(fd) == -1)
		ft_error();
	pid = fork();
	if (pid < 0)
		ft_error();
	if (pid == 0)
	{
		close(fd[0]);
		dup2(fd[1], STDOUT_FILENO);
		ft_execute(av, env);
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		waitpid(pid, NULL, 0);
	}
}

void	here_doc(char *limiter, int ac)
{
	pid_t		pid;
	char		*line;
	int			fd[2];

	if (ac < 6)
		return ;
	if (pipe(fd) == -1)
		ft_error();
	pid = fork();
	if (pid == 0)
	{
		close(fd[0]);
		while (get_next_line(&line))
		{
			if (ft_strncmp(line, limiter, ft_strlen(limiter)) == 0)
				exit(EXIT_SUCCESS);
			write(fd[1], line, ft_strlen(line));
		}
	}
	else
	{
		close(fd[1]);
		dup2(fd[0], STDIN_FILENO);
		wait(NULL);
	}
}

int	main(int ac, char **av, char **env)
{
	int	file_in;
	int	file_out;
	int	i;

	if (ac >= 5)
	{
		if (ft_strncmp(av[1], "here_doc", 8) == 0)
		{
			i = 3;
			file_out = open_fd(av[ac -1], 2);
			here_doc(av[2], ac);
		}
		else
		{
			i = 2;
			file_in = open_fd(av[1], 0);
			file_out = open_fd(av[ac - 1], 1);
			dup2(file_in, STDIN_FILENO);
		}
		while (i < ac - 2)
			ft_start_process(av[i++], env);
		dup2(file_out, STDOUT_FILENO);
		ft_execute(av[ac - 2], env);
	}
	return (0);
}
