/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 12:35:38 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/18 12:44:54 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h> 
int	main(void)
{
	char	c;
	int	x;
	int	y;
	
	c = '6';
	x = ft_isdigit(c);
	y = isdigit(c);
	
	printf("%d\n", x);
	printf("%d", y);
	return (0);
}*/
