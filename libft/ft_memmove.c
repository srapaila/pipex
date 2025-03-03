/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:10:28 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/19 16:16:27 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;
	size_t				i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char src[21] = "a shiny white sphere";
	char *src1 = src + 2;
	char *dest = src + 8;

	printf ("%s\n", src);
	ft_memmove(dest, src1, 5);
	printf ("%s\n", src);
	memmove(dest, src1, 5);
	printf ("%s\n", src);
	memcpy (dest, src1, 5);
	printf ("%s\n", src);
	return (0);
}
*/
