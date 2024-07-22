/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_t_move.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:20:50 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/07 15:41:38 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*--------------RESETS STRUCT t_move---------------------*/

#include "push_swap.h"

void	init_t_move(t_move *move)
{
	move->ra = 0;
	move->rb = 0;
	move->rr = 0;
	move->rra = 0;
	move->rrb = 0;
	move->rrr = 0;
	move->total = INT_MAX;
}
/*
int	main(void)
{
	t_move def;

	init_t_move(&def);
	printf("ra=%i\nrb=%i\ntotal%i\n", def.ra, def.rb, def.total);
	return (0);
}*/
