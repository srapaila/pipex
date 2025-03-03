/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 15:37:35 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/19 15:53:19 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;	
	size_t				i;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (!d && !s)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[9] = "abcdefgh";
	char dest[10];
	//char src2[50] = "Hello world!";
	//char dest2[50];
	
	
	ft_memcpy(src + 3, src, 4);
	printf("%s\n", src);
	printf("%s\n", dest);
	memcpy(src + 3, src, 4);
	printf("%s\n", src);
	//printf("%s\n\n", dest2);
	return (0);
}*/
