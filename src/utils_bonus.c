/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <srapaila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 18:07:11 by srapaila          #+#    #+#             */
/*   Updated: 2025/02/10 18:36:56 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	ft_execute(char *cmd, char **env)
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

int	get_next_line(char **line)
{
	char	*buffer;
	char	c;
	int		i;
	int		n;

	i = 0;
	n = 0;
	buffer = (char *)malloc(10000);
	if (!buffer)
		return (0);
	n = read(0, &c, 1);
	while (n && c != '\n' && c != '\0')
	{
		if (c != '\n' && c != '\0')
			buffer[i] = c;
		i++;
		n = read(0, &c, 1);
	}
	buffer[i] = '\n';
	buffer[i + 1] = '\0';
	*line = buffer;
	free(buffer);
	return (n);
}
