/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:19:33 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/06 10:59:41 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*-----------CHECKS IF LIST IS PROPERLY ORDERED FROM MINOR TO MAJOR--------*/

#include "push_swap.h"

int	check_order(t_lista *stack)
{
	while (stack->next != NULL)
	{
		if (stack->content > stack->next->content)
			return (1);
		stack = stack->next;
	}
	return (0);
}
