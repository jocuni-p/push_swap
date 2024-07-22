/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackmax.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:46:24 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/10/19 14:50:11 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*--------------------LOOKS FOR THE BIGGEST CONTENT------------------------*/

#include "push_swap.h"

int	max(t_lista *stack)
{
	int	aux;

	aux = stack->content;
	while (stack)
	{
		if (stack->content > aux)
			aux = stack->content;
		stack = stack->next;
	}
	return (aux);
}
