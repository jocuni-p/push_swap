/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleaner.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:22:02 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/06 11:01:30 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*-----------FREE THE ALLOCATED MEM IN THE LIST------------*/

#include "push_swap.h"

void	cleaner(t_lista **lst)
{
	t_lista	*aux;

	aux = (*lst);
	while (aux)
	{
		(*lst) = aux->next;
		free(aux);
		aux = (*lst);
	}
	(*lst) = NULL;
}
