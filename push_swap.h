/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:46:25 by kkonkel           #+#    #+#             */
/*   Updated: 2024/04/04 20:01:13 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "best_libft/libft.h"

typedef struct s_node
{
	int	content;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_a;
	int	size_b;
}	t_stack;

int		ft_atoi(const char *str);
int		main(int argc, char *argv[]);
int		all_numbers(char *args[]);
int		no_repeat(char *args[]);
int		take_strings(); //delete after handling strings
int		check_limits(char *args[]);
//void	insert_front();
void	add_node(t_node **stack_head, int content);
void	print_list(t_node **stack_head);
void	delete_back(t_node **stack_head);
int		stack_size(char *argv[]);
void	stack_init(char *argv[], t_node **stack_head);
//void	stack_init_fill(char *argv[], t_stack *stack);
void	swap(t_node **stack_head);
void	push(t_node **origin_stack_head, t_node **dest_stack_head);
void	rotate(t_node **stack_head);
void	rr(t_node **stack_head_a, t_node **stack_head_b);
void	rev_rotate(t_node **stack_head);
void	rrr(t_node **stack_head_a, t_node **stack_head_b);
#endif