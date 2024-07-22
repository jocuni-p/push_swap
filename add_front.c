/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 14:12:11 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/10/20 10:07:22 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*------------ADD AN ELEMENT TO THE BEGINING OF A LIST---------*/

#include "push_swap.h"

void	add_front(t_lista **stack, t_lista *node)
{
	if (!*stack)
		*stack = node;
	else
	{
		node->next = *stack;
		*stack = node;
	}
}
