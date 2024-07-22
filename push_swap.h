/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocuni-p <jocuni-p@student.42barcelona.com +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 16:57:55 by jocuni-p          #+#    #+#             */
/*   Updated: 2024/07/22 18:57:14 by jocuni-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "./libft/libft.h"
# include <stdio.h>
# include <limits.h>

typedef struct s_lista
{
	int				content;
	struct s_lista	*next;
}					t_lista;

typedef struct s_move
{
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
	int	total;
}				t_move;

t_lista	*new_node(int *content);
t_lista	*last(t_lista *lst);

int		max(t_lista *lst);
int		min(t_lista *lst);
int		size(t_lista *lst);

void	cleaner(t_lista **lst);
void	add_back(t_lista **lst, t_lista *node);
void	add_front(t_lista **lst, t_lista *node);
int		my_atoi(const char *str, t_lista **lst);
int		check_dup(t_lista *lst);
int		check_order(t_lista *lst);
void	ft_err(t_lista **lst);
void	init_t_move(t_move *move);

void	select_alg(t_lista **a, t_lista **b);
void	sort_3(t_lista **lst);
void	sort_4(t_lista **a, t_lista **b);
void	sort_5(t_lista **a, t_lista **b);
void	sort_many(t_lista **a, t_lista **b);
int		find_pos(int nbr, t_lista *lst);
void	set_b(t_lista **b);
t_move	mov_calculator(int pos_a, int pos_b, t_lista *a, t_lista *b);
void	mov_optimize_rr(t_move *def);
void	mov_optimize_rrr(t_move *def);
void	mov_exe(t_lista **a, t_lista **b, t_move def);

void	swap(t_lista **lst);
void	sa(t_lista **lst);
void	sb(t_lista **lst);
void	ss(t_lista **a, t_lista **b);

void	rotate(t_lista **lst);
void	ra(t_lista **lst);
void	rb(t_lista **lst);
void	rr(t_lista **a, t_lista **b);

void	push(t_lista **src, t_lista **dst);
void	pa(t_lista **b, t_lista **a);
void	pb(t_lista **a, t_lista **b);

void	rev_rotate(t_lista **lst);
void	rra(t_lista **lst);
void	rrb(t_lista **lst);
void	rrr(t_lista **a, t_lista **b);

void	print_lists(t_lista *stack_a, t_lista *stack_b);

#endif
