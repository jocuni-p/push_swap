/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joan <jocuni-p@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 21:34:45 by joan              #+#    #+#             */
/*   Updated: 2023/11/06 15:43:37 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*-----------------PUSH----------------*/
/*Toma el primer elemento del primer argumento src y lo pone encima del segundo
 * argumento dst. No hace nada si src esta vacio */

#include "push_swap.h"

void	push(t_lista **src, t_lista **dst)
{
	t_lista	*tmp;

	tmp = *src;
	*src = (*src)->next;
	if (*dst == NULL)
	{
		*dst = tmp;
		tmp->next = NULL;
	}
	else
	{
		tmp->next = *dst;
		*dst = tmp;
	}
}

void	pa(t_lista **a, t_lista **b)
{
	if ((*b) != NULL)
	{
		push(b, a);
		write(1, "pa\n", 3);
	}
}

void	pb(t_lista **a, t_lista **b)
{
	if ((*a) != NULL)
	{
		push(a, b);
		write(1, "pb\n", 3);
	}
}
