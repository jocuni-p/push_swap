/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:12:23 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/06 15:40:41 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*--------mi personalizacion del ft_lstnew-----------*/

#include "push_swap.h"

t_lista	*new_node(int *content)
{
	t_lista	*node;

	node = (t_lista *)malloc(sizeof(t_lista));
	if (!node)
		return (NULL);
	node->content = *content;
	node->next = NULL;
	return (node);
}
