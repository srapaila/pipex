/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 19:47:23 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/20 19:47:24 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	cc;
	size_t			i;

	str = (unsigned char *) s;
	cc = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cc)
			return ((void *) &str[i]);
		i++;
	}
	return (NULL);
}
/*
int     main(void)
{
    const char *str = "Ciao, mondo!";
    char c = 'm';
    size_t n = 13;

    void *result = ft_memchr(str, c, n);
    if (result != NULL)
    {
        printf("Carattere trovato: '%c' alla posizione
         %ld\n", c, (long)(result - (void *)str));
    }
    else
    {
        printf("Carattere '%c' non trovato\n", c);
    }
    c = 'z';
    result = ft_memchr(str, c, n);

    if (result != NULL)
    {
        printf("Carattere trovato: '%c' alla posizione %l
        d\n", c, (long)(result - (void *)str));
    }
    else
    {
        printf("Carattere '%c' non trovato\n", c);
    }

    return 0;
}*/
