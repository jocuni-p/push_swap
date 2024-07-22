/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 16:38:01 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/10/23 11:16:51 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Adds *node to the end of list **lst. Returns a pointer to the first node.*/

#include "push_swap.h"

void	add_back(t_lista **lst, t_lista *node)
{
	t_lista	*aux;

	if (*lst)
	{
		aux = last(*lst);
		aux->next = node;
	}
	else
		*lst = node;
}
