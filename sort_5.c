/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:21:10 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/07 14:03:26 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*-----------------------SORTS 5 ARGS-----------------------*/
/*move the 2 smallest to stack 'b', sorts stack 'a' with sort_3*/
/*and moves back 'b' to 'a'.*/

#include "push_swap.h"

void	sort_5(t_lista **a, t_lista **b)
{
	int	minim;

	while (check_order(*a) == 1)
	{
		if (((*a)->content == max(*a)) && check_order(*a + 1) == 0)
			ra(a);
		while (size(*a) > 3 && check_order(*a) == 1)
		{
			minim = min(*a);
			if (minim == (*a)->content)
				pb(a, b);
			else if (minim == (*a)->next->content)
				sa(a);
			else if (minim == (*a)->next->next->content)
				ra(a);
			else
				rra(a);
		}
		if (size(*a) == 3 && check_order(*a) == 1)
			sort_3(a);
		pa(a, b);
		pa(a, b);
	}
	return ;
}
