/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_optimize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joan <jocuni-p@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:21:44 by joan              #+#    #+#             */
/*   Updated: 2023/11/07 18:09:10 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	mov_optimize_rr(t_move *def)
{
	int	min;

	min = 0;
	if (def->ra >= 1 && def->rb >= 1)
	{
		if (def->ra >= def->rb)
			min = def->rb;
		else
			min = def->ra;
	}
	def->rr = min;
	while (min)
	{
		def->ra -= 1;
		def->rb -= 1;
		min--;
	}
}

void	mov_optimize_rrr(t_move *def)
{
	int	min;

	min = 0;
	if (def->rra >= 1 && def->rrb >= 1)
	{
		if (def->rra >= def->rrb)
			min = def->rrb;
		else
			min = def->rra;
	}
	def->rrr = min;
	while (min)
	{
		def->rra -= 1;
		def->rrb -= 1;
		min--;
	}
}
