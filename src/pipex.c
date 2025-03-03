/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <srapaila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:23:14 by srapaila          #+#    #+#             */
/*   Updated: 2025/02/10 17:42:51 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_exec(char *cmd, char **env)
{
	char	**s_cmd;
	char	*path;

	s_cmd = ft_split(cmd, ' ');
	path = ft_path(s_cmd[0], env);
	if (s_cmd[0] && path)
	{
		execve(path, s_cmd, env);
		ft_free(s_cmd);
		free(path);
	}
	else
	{
		write(2, "pipex: ", 7);
		write(2, s_cmd[0], ft_strlen(s_cmd[0]));
		write(2, ": command not found\n", 20);
		ft_free(s_cmd);
		exit(127);
	}
}

void	parent_p(char **av, int *pipefd, char**env)
{
	int	fd_out;

	fd_out = open_fd(av[4], 1);
	dup2(pipefd[0], STDIN_FILENO);
	dup2(fd_out, STDOUT_FILENO);
	close(pipefd[1]);
	close(fd_out);
	ft_exec(av[3], env);
}

void	child_p(char **av, int *pipefd, char **env)
{
	int	fd_in;

	fd_in = open_fd(av[1], 0);
	dup2(fd_in, STDIN_FILENO);
	dup2(pipefd[1], STDOUT_FILENO);
	close(pipefd[0]);
	close(fd_in);
	ft_exec(av[2], env);
}

int	main(int ac, char **av, char **env)
{
	pid_t		pid;
	int			pipefd[2];

	if (ac == 5)
	{
		if (pipe(pipefd) == -1)
			ft_error();
		pid = fork();
		if (pid == -1)
			ft_error();
		if (!pid)
			child_p(av, pipefd, env);
		else
			parent_p(av, pipefd, env);
	}
	else
		ft_putstr_fd("Error: wrong arguments\n", 2);
	return (0);
}
