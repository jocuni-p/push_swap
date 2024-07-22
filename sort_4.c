/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 12:26:17 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/07 12:43:55 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*-----------------------SORTS 4 ARGS-----------------------*/

#include "push_swap.h"

static void	spec_cases_1(t_lista **a)
{
	int	minim;
	int	maxim;

	minim = min(*a);
	maxim = max(*a);
	if ((*a)->content == minim && (*a)->next->next->content == maxim \
		&& last(*a)->content < (*a)->next->content)
	{
		rra(a);
		sa(a);
	}
	else if ((*a)->next->content == maxim \
		&& (*a)->next->next->content == minim \
		&& (*a)->content < last(*a)->content)
	{
		rra(a);
		sa(a);
		rra(a);
	}
}

static void	spec_cases_2(t_lista **a)
{
	int	minim;
	int	maxim;

	minim = min(*a);
	maxim = max(*a);
	if ((*a)->next->content == minim \
		&& (*a)->next->next->content == maxim \
		&& (*a)->content > last(*a)->content)
	{
		sa(a);
		rra(a);
		sa(a);
	}
	else if (last(*a)->content == minim && (*a)->next->content == maxim \
		&& (*a)->content > (*a)->next->next->content)
	{
		rra(a);
		rra(a);
		sa(a);
	}
}

static void	execute(t_lista **a, t_lista **b)
{
	sort_3(a);
	pa(a, b);
}

void	sort_4(t_lista **a, t_lista **b)
{
	int	minim;
	int	maxim;

	while (check_order(*a) == 1)
	{
		spec_cases_1(a);
		spec_cases_2(a);
		while (size(*a) > 3 && check_order(*a) == 1)
		{
			minim = min(*a);
			maxim = max(*a);
			if ((*a)->content == maxim \
					&& (*a)->next->next->content < last(*a)->content)
				ra(a);
			else if (minim == (*a)->content)
				pb(a, b);
			else if (minim == (*a)->next->content)
				sa(a);
			else
				rra(a);
		}
		if (check_order(*a) == 1)
			execute(a, b);
	}
	return ;
}
