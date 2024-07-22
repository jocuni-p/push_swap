/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_dup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:36:40 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/06 10:58:56 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*----------CHECKS FOR ANY DUPLICADE ELEMENT IN THE LIST----------------*/

#include "push_swap.h"

int	check_dup(t_lista *lst)
{
	t_lista	*aux;

	if (!lst)
		return (-1);
	while (lst != 0)
	{
		aux = lst->next;
		while (aux != 0)
		{
			if (lst->content == aux->content)
				return (-1);
			aux = aux->next;
		}
		lst = lst->next;
	}
	return (0);
}
