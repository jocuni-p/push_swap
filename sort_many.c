/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_many.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 14:27:57 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/07 17:55:00 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*--MOVES ONE BY ONE TO 'b' IN REVERSE ORDER, AND MOVES BACK ALL TO 'a'------*/
#include "push_swap.h"

static void	aux(t_lista **a, t_lista **b)
{
	int		pos_a;
	int		pos_b;
	t_move	def;
	t_move	aux;
	t_lista	*a_aux;

	a_aux = (*a);
	while (a_aux)
	{
		init_t_move(&def);
		pos_a = 0;
		while (a_aux)
		{
			pos_b = find_pos((a_aux)->content, *b);
			aux = mov_calculator(pos_a, pos_b, *a, *b);
			if (def.total > aux.total)
				def = aux;
			pos_a++;
			a_aux = a_aux->next;
		}
		mov_optimize_rr(&def);
		mov_optimize_rrr(&def);
		mov_exe(a, b, def);
		a_aux = (*a);
	}
}

void	sort_many(t_lista **a, t_lista **b)
{
	pb(a, b);
	pb(a, b);
	aux(a, b);
	set_b(b);
	while (*b)
		pa(a, b);
}
