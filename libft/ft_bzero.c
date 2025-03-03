/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 19:11:44 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/18 19:21:25 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr_b;
	size_t			i;

	ptr_b = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr_b[i] = 0;
		i++;
	}
}
/*
int main( void )
{
   char buffer[] = "CIAO";
   char buffer2[] = "CIAO";

   printf( "Before: %s\n", buffer );
   ft_bzero( buffer, sizeof(buffer) );
   printf( "After:  %s\n", buffer );
   printf( "Before: %s\n", buffer2 );
   bzero (buffer2, sizeof(buffer) );
   printf( "After:  %s\n", buffer2 );
}*/
