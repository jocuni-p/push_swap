/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 11:14:45 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/06 16:42:40 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*------EL ULTIMO ELEMENTO PASA A PRIMERO-------*/

#include "push_swap.h"

void	rev_rotate(t_lista **lst)
{
	t_lista	*aux;
	t_lista	*tmp;

	if (!*lst || (*lst)->next == NULL)
		return ;
	aux = (*lst);
	while (aux->next->next != NULL)
		aux = aux->next;
	tmp = aux->next;
	aux->next = NULL;
	add_front(lst, tmp);
}

void	rra(t_lista **lst)
{
	rev_rotate(lst);
	write(1, "rra\n", 4);
}

void	rrb(t_lista **lst)
{
	rev_rotate(lst);
	write(1, "rrb\n", 4);
}

void	rrr(t_lista **a, t_lista **b)
{
	rev_rotate(a);
	rev_rotate(b);
	write(1, "rrr\n", 4);
}
