/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:46:06 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/06 16:59:04 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*--------------CUENTA NUM DE NODOS DE UNA LISTA-------------*/

#include "push_swap.h"

int	size(t_lista *lst)
{
	int	size;

	size = 0;
	if (lst != 0)
	{
		while (lst != 0)
		{
			lst = lst->next;
			size++;
		}
	}
	return (size);
}
/*
int	main(void)
{
	t_list	node1, node2, node3, node4;
	t_list *head;

	head = &node1;
	node1.content = 1;
	node1.next = &node2;
	node2.content = 2;
	node2.next = &node3;
	node3.content = 3;
	node3.next = &node4;
	node4.content = 4;
	node4.next = NULL;
	printf("La lista 'head' tiene %d nodos.\n", ft_lstsize(head));
	return (0);
}*/
