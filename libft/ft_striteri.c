/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:56:05 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/26 14:56:06 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
void to_uppercase(unsigned int i, char *c)
{
    if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
        *c -= 32; // Converte in maiuscolo i caratteri alfabetici
}

int main (void)
{
    char str[] = "Hello world!";

    printf ("Prima della modifica: %s\n", str);
    ft_striteri(str, to_uppercase);
    printf ("Dopo la modifica: %s\n", str);
    return (0);
}*/
