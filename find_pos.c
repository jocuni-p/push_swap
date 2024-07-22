/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_pos.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joan <jocuni-p@student.42barcelona.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 18:21:49 by joan              #+#    #+#             */
/*   Updated: 2023/11/07 10:19:59 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*-----------LOOKS FOR THE nbr POSITION IN lst---------*/

#include "push_swap.h"

int	find_pos(int nbr, t_lista *lst)
{
	int		pos;
	t_lista	*aux;

	pos = 0;
	aux = lst;
	while (aux)
	{
		if (nbr > aux->content)
		{
			if ((aux->content == min(lst) && last(lst)->content > nbr) \
					|| last(lst)->content > nbr || aux->content == max(lst))
				return (pos);
		}
		else if (nbr < aux->content)
		{
			if (aux->next == NULL)
				return (++pos);
			if (nbr > aux->next->content || aux->next->content == max(lst))
				return (++pos);
		}
		aux = aux->next;
		pos++;
	}
	return (pos);
}
