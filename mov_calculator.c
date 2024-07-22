/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov_calculator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 14:20:04 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/06 14:33:31 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Recibe la pos en la que encaja en el stack de destino y retorna una struct 
 * con los movs para encajarla */
#include "push_swap.h"

t_move	mov_calculator(int pos_a, int pos_b, t_lista *a, t_lista *b)
{
	t_move	aux;

	init_t_move(&aux);
	if (pos_a <= size(a) / 2)
		aux.ra = pos_a;
	else
		aux.rra = size(a) - pos_a;
	if (pos_b <= size(b) / 2)
		aux.rb = pos_b;
	else
		aux.rrb = size(b) - pos_b;
	aux.total = aux.ra + aux.rb + aux.rra + aux.rrb;
	return (aux);
}
