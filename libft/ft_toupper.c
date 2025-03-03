/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:32:55 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/18 15:43:47 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	c;
	int	x,y;

	c = '1';
	x = ft_toupper(c);
	y = toupper(c);
	printf("%d\n", x);
	printf("%d\n", x);
	return (0);
}*/
/*
int main()
{
    int j = 0;
    char str[] = "GeEks@123\n";
    char ch;

    while (str[j]) {
        ch = str[j];
        putchar(ft_toupper(ch));
        j++;
    }

    return 0;
}*/
