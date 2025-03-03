/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <srapaila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 22:26:54 by srapaila          #+#    #+#             */
/*   Updated: 2025/02/13 18:09:09 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <sys/types.h>  // For pid_t type
# include <sys/wait.h>   // For wait and waitpid functions
# include "../libft/libft.h"

void	child_p(char **av, int *pipefd, char **env);
void	parent_p(char **av, int *pipefd, char**env);
void	ft_exec(char *cmd, char **env);
void	ft_execute(char *cmd, char **env);
void	ft_start_process(char *av, char **env);
void	ft_free(char **str);
void	ft_error(void);
void	here_doc(char *limiter, int ac);
char	**get_path(char **env);
char	*ft_path(char *cmd, char **env);
int		get_next_line(char **line);
int		open_fd(char *file, int in_or_out);

#endif
