/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:38:20 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/26 19:38:21 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int main(void)
{
    t_list *head = NULL;

    // Creazione e aggiunta di nodi
    ft_lstadd_front(&head, ft_lstnew("Nodo1"));
    ft_lstadd_front(&head, ft_lstnew("Nodo2"));
    ft_lstadd_front(&head, ft_lstnew("Nodo3"));

    // Calcolo e stampa della dimensione della lista
    int size = ft_lstsize(head);
    printf("La lista contiene %d nodi.\n", size);

    // Libera la memoria
    while (head)
    {
        t_list *temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}*/
