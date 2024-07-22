/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 12:42:50 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/06 14:29:00 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*---------------------LOOKS FOR THE SMALLEST CONTENT-----------------*/
#include "push_swap.h"

int	min(t_lista *stack)
{
	int	aux;

	aux = stack->content;
	while (stack)
	{
		if (stack->content < aux)
			aux = stack->content;
		stack = stack->next;
	}
	return (aux);
}
