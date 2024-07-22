/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_lst.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 11:29:20 by jocuni-p          #+#    #+#             */
/*   Updated: 2023/10/22 00:13:16 by joan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*-------------IMPRIME LAS DOS LISTAS---------*/

//envio *simple porque NO se haran cambios en la lista
void	print_lists(t_lista *stack_a, t_lista *stack_b)
{
	t_lista	*aux1;
	t_lista	*aux2;

	aux1 = stack_a;
	aux2 = stack_b;

	printf("===aaa=\n");//ELIMINAR

	while (aux1)
	{
		printf("%i\n", aux1->content);//ELIMINAR
		aux1 = aux1->next;
	}
	printf("===bbb=\n");//ELIMINAR

	while (aux2)
	{
		printf("%i\n", aux2->content);//ELIMINAR
		aux2 = aux2->next;
	}
//	printf("- - - - -\n");//ELIMINAR
	printf("-------\n\n");//ELIMINAR
}
/*
void	print_a(t_lista *stack_a)
{
	t_lista	*aux;

	aux = stack_a;
	printf("===================\n");
	while (aux)
	{
		printf("stack_a->content = %i\n", aux->content);
		aux = aux->next;
	}
	printf("-------\n");
}


void	print_b(t_lista *stack_b)
{
	t_lista	*aux;

	aux = stack_b;
//	printf("===================\n");
	while (aux)
	{
		printf("stack_b->content = %i\n", aux->content);
		aux = aux->next;
	}
	printf("===================\n");
}*/
