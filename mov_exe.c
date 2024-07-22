/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_exe.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:52:57 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/07 17:54:05 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*--------------EJECUTA LOS MOVIMIENTOS EN LOS DOS STACKS---------------*/

#include "push_swap.h"

void	mov_exe(t_lista **a, t_lista **b, t_move def)
{
	while (def.rr-- > 0)
		rr(a, b);
	while (def.rrr-- > 0)
		rrr(a, b);
	while (def.ra > 0)
	{
		ra(a);
		def.ra--;
	}
	while (def.rb > 0)
	{
		rb(b);
		def.rb--;
	}
	while (def.rra > 0)
	{
		rra(a);
		def.rra--;
	}
	while (def.rrb > 0)
	{
		rrb(b);
		def.rrb--;
	}
	pb(a, b);
}
