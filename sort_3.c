/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:54:26 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/11/06 17:02:11 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*---------------------SORTS 3 ARGS-------------------------*/

#include "push_swap.h"

void	sort_3(t_lista **a)
{
	if ((*a)->content == min(*a) && (*a)->next->content == max(*a))
	{
		rra(a);
		sa(a);
		return ;
	}
	else if ((*a)->content == max(*a) && (*a)->next->content == min(*a))
	{
		ra(a);
		return ;
	}
	else if ((*a)->content == max(*a) && (*a)->next->content != min(*a))
	{
		ra(a);
		sa(a);
		return ;
	}
	else if ((*a)->content != max(*a) && (*a)->next->content == min(*a))
	{
		sa(a);
		return ;
	}
	else
		rra(a);
	return ;
}
/*		
        while (ft_stackcheck_order(*stack) == 1)//mientras stack NO ordenado
        {
			printf("while de sort_3arg");//ELIMINAR
            if (((*stack)->content > (*stack)->next->content) \
                            && (*stack)->content != ft_stackmax(*stack))
                sa(stack);
            else
                ra(stack);
        }
        return;
}*/
