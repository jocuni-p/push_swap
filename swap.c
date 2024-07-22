/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:36:29 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/07 10:04:37 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Intercambia los 2 primeros elementos encima del stack*/

#include "push_swap.h"

void	swap(t_lista **lst)
{
	t_lista	*first;
	t_lista	*second;
	t_lista	*third;

	if (!*lst || (*lst)->next == NULL)
		return ;
	first = (*lst);
	second = (*lst)->next;
	third = (*lst)->next->next;
	*lst = second;
	(*lst)->next = first;
	(*lst)->next->next = third;
}

void	sa(t_lista **a)
{
	swap(a);
	write(1, "sa\n", 3);
}

void	sb(t_lista **lst)
{
	swap(lst);
	write(1, "sb\n", 3);
}

void	ss(t_lista **a, t_lista **b)
{
	swap(a);
	swap(b);
	write(1, "ss\n", 3);
}
