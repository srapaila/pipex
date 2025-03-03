/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <srapaila@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 18:14:12 by srapaila          #+#    #+#             */
/*   Updated: 2025/02/08 10:40:22 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || \
			(s[i] == c && s[i + 1] != '\0' && s[i + 1] != c))
			k++;
		i++;
	}
	return (k);
}

static char	*ft_strndup(const char *s, size_t n)
{
	char	*ris;
	size_t	i;

	i = 0;
	ris = NULL;
	if (n == 0)
		return (NULL);
	ris = (char *)malloc(sizeof(char) * n + 1);
	if (ris == 0)
		return (NULL);
	while (i < n)
	{
		ris[i] = s[i];
		i++;
	}
	ris[i] = '\0';
	return (ris);
}

static char	**ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ris;
	size_t	tmp;
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	ris = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!ris)
		return (NULL);
	while (i < ft_wordcount(s, c) && s[k] != '\0')
	{
		while (s[k] == c)
			k++;
		tmp = k;
		while (s[k] != c && s[k] != '\0')
			k++;
		ris[i] = ft_strndup(&s[tmp], k - tmp);
		if (ris[i++] == 0)
			return (ft_free(ris));
	}
	ris[i] = NULL;
	return (ris);
}
