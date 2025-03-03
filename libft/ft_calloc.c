/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 19:50:39 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/21 19:50:42 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = malloc(nmemb * size);
	if (!tmp)
		return (NULL);
	while (i < nmemb * size)
		tmp[i++] = 0;
	return (tmp);
}
/*
int main()
{
    int *arr;
    size_t n = 5;

    // Usa la funzione ft_calloc per allocare memoria per 5 interi
    arr = (int *)ft_calloc(n, sizeof(int));
    if (!arr) {
        printf("Errore di allocazione della memoria\n");
        return 1;
    }

    // Stampa i valori inizializzati
    for (size_t i = 0; i < n; i++) {
        printf("arr[%zu] = %d\n", i, arr[i]);
    }

    // Libera la memoria allocata
    free(arr);

    return 0;
}*/
