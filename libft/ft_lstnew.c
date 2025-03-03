/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srapaila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 19:02:43 by srapaila          #+#    #+#             */
/*   Updated: 2024/11/26 19:07:17 by srapaila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
/*
int	main()
{
	int	value = 42;
	t_list *node;

	node = ft_lstnew(&value);
	if (node)
	{
		printf("Content: %d\n", *(int *)(node->content));
		printf("Next: %p\n", (void *)(node->next));
	}
	free(node);
	return(0);
}*/
