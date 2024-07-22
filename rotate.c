/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 12:43:33 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/12/02 10:42:20 by joan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*-----------EL PRIMER ELEMENTO PASA A ULTIMO------------*/

#include "push_swap.h"

void	rotate(t_lista **lst)
{
	t_lista	*rotated;
	t_lista	*tmp;

	if (!*lst || (*lst)->next == NULL)
		return ;
	rotated = *lst;
	tmp = (*lst)->next;
	while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	rotated->next = NULL;
	(*lst)->next = rotated;
	(*lst) = tmp;
}

void	ra(t_lista **lst)
{
	rotate(lst);
	write(1, "ra\n", 3);
}

void	rb(t_lista **lst)
{
	rotate(lst);
	write(1, "rb\n", 3);
}

void	rr(t_lista **a, t_lista **b)
{
	rotate(a);
	rotate(b);
	write(1, "rr\n", 3);
}
