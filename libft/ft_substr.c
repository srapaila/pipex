/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 20:06:33 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/21 20:06:35 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}

/*
int main()
{
    char *original = "Hello, world!";
    char *copy = ft_substr(original, 7, 5);

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
