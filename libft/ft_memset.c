/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:41:37 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/18 19:00:51 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*ptr_b;
	size_t			i;

	ptr_b = (unsigned char *)ptr;
	i = 0;
	while (i < n)
	{
		ptr_b[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}
/*
int main( void )
{
   char buffer[] = "This is a test of the memset function";
   char buffer2[] = "This is a test of the memset function";

   printf( "Before: %s\n", buffer );
   ft_memset( buffer, '*', sizeof(buffer) );
   printf( "After:  %s\n", buffer );
   printf( "Before: %s\n", buffer2 );
   memset( buffer2, '*', sizeof(buffer) );
   printf( "After:  %s\n", buffer2 );
}*/
