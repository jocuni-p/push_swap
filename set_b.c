/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_b.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:04:28 by joan              #+#    #+#             */
/*   Updated: 2024/07/22 17:52:15 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*-------ROTA B HASTA POSICION CORRECTA (DE MAYOR A MENOR)-----------*/

#include "push_swap.h"

static void	execute(int pos, t_lista **b)
{
	if (pos <= (size(*b) / 2))
	{
		while (pos--)
			rb(b);
	}
	else
	{
		pos = size(*b) - pos;
		while (pos--)
			rrb(b);
	}
}

void	set_b(t_lista **b)
{
	int		maxim;
	int		pos;
	t_lista	*aux;

	pos = 0;
	aux = (*b);
	maxim = max(*b);
	while (aux)
	{
		if (aux->content == maxim)
			break ;
		pos++;
		aux = aux->next;
	}
	execute(pos, b);
}
