/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 18:03:54 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/21 18:03:56 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		while (big[i + j] == little[j] && big [i + j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
				return ((char *) big + i);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char *big = "Foo Bar Baz";
    const char *little = "Bar";
    char *ptr;

        ptr = ft_strnstr(big, little, 4); 
		printf ("%s", ptr);
	return (0);
}*//*
questa setta ptr a NULL perche vengono
ricercati soli i 4 caratteri e di conseguenza
little non viene trovata*/
