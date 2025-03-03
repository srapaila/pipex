/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:31:23 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/26 14:31:24 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ns;

	i = 0;
	ns = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (!ns)
		return (NULL);
	while (i < ft_strlen(s))
	{
		ns[i] = (*f)(i, s[i]);
		i++;
	}
	ns[i] = 0;
	return (ns);
}
/*
char example_function(unsigned int i, char c)
{
    // Aggiunge l'indice al valore ASCII del carattere
    return c + i;
}

int main(void)
{
    char *original = "Hello";
    char *transformed;

    // Usa ft_strmapi con la funzione di esempio
    transformed = ft_strmapi(original, example_function);

    if (transformed == NULL)
    {
        printf("Errore nell'allocazione della memoria!\n");
        return 1;
    }

    printf("Stringa originale: %s\n", original);
    printf("Stringa trasformata: %s\n", transformed);

    // Libera la memoria allocata
    free(transformed);

    return 0;
}*/
