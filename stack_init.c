/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 06:12:21 by kkonkel           #+#    #+#             */
/*   Updated: 2024/04/04 16:09:12 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int	stack_size(char *argv[])
{
	int	i;

	i = 1;
	while (argv[i])
		i++;
	return (i - 1);
}
/*
void	stack_init_fill(char *argv[], t_stack *stack)
{
	int	i;

	i = 0;
	stack->size_a = stack_size(argv);
	stack->size_b = 0;
	stack->stack_a = (int *)malloc(sizeof(int) * stack->size_a);
	stack->stack_b = (int *)malloc(sizeof(int) * stack->size_a);
	while (argv[++i])
	{
		add_node(stack_head, ft_atoi(argv[i]));
	}
	//print_stack();
}*/
void	stack_init(char *argv[], t_node **stack_head) //a is a pointer to the head of the stack
{
	int	i;

	i = 0;
	while (argv[++i])
	{
		add_node(stack_head, ft_atoi(argv[i]));
	}
	//appending the node to a linked list by taking a pointer to stack a and creating a new node and assigning the current argument to that new node
}