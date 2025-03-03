/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:22:47 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/21 19:22:48 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	size_t	i;
	char	*tmp;

	len = 0;
	i = 0;
	while (s[len])
		len++;
	tmp = malloc (sizeof(char) * len + 1);
	if (!tmp)
		return (NULL);
	while (i < len)
	{
		tmp[i] = s[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*
int main()
{
    char *original = "Hello, world!";
    char *copy = ft_strdup(original);

    if (copy)
    {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        free(copy); // Libera la memoria allocata
    }
    else
    {
        printf("Errore nell'allocazione della memoria.\n");
    }

    return 0;
}
*/
