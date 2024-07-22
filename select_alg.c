/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_alg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:39:52 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/07 10:13:30 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*---------SELECTS THE ALGORITHM TO USE DEPENDING ON THE ARG AMOUNT----------*/

#include "push_swap.h"

void	select_alg(t_lista **a, t_lista **b)
{
	int	size_a;

	size_a = size(*a);
	if (size_a == 1)
		return ;
	else if (size_a == 2)
	{
		if ((*a)->content > (*a)->next->content)
			sa(a);
	}
	else if (size_a == 3)
		sort_3(a);
	else if (size_a == 4)
		sort_4(a, b);
	else if (size_a == 5)
		sort_5(a, b);
	else
		sort_many(a, b);
	return ;
}
