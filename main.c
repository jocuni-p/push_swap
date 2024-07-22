/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:39:22 by jocuni-p          #+#    #+#             */
/*   Updated: 2024/07/22 18:55:53 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*--------CREA Y INICIALIZA stack_a CON LOS ARGUMENTOS DE ENTRADA--------*/

static void	init_a(int argc, char **argv, t_lista **a)
{
	int		num;
	int		i;
	t_lista	*node;

	i = 1;
	while (i < argc)
	{
		num = my_atoi(argv[i], a);
		node = new_node(&num);
		add_back(a, node);
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_lista	*a;
	t_lista	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (0);
	init_a(argc, argv, &a);
//	print_lists(a, NULL);
	if (check_dup(a) == -1)
	{
		cleaner(&a);
		return (write(2, "Error\n", 6));
	}
	if (check_order(a) == 1)
		select_alg(&a, &b);
//	print_lists(a, b);
	cleaner(&a);
	cleaner(&b);
	return (0);
}
