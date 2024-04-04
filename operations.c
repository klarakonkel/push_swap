/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:42:27 by kkonkel           #+#    #+#             */
/*   Updated: 2024/04/04 20:01:12 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_node **stack_head)
{
	t_node	*first;
	t_node	*second;
	if  (!(*stack_head) || !((*stack_head)->next) || !((*stack_head)->next->next))
		return ;
		
	first = *stack_head;
	second = first->next;
	first->next = second->next;
	second->prev = 0;
	second->next = first;
	first->prev = second;
	if (first->next != 0)
		first->next->prev = first;
	*stack_head = second;
}
//not tested!!!!!!!!!!!
void	ss(t_node **stack_head_a, t_node **stack_head_b)
{
	swap(stack_head_a);
	swap(stack_head_b);
}

void	push(t_node **origin_stack_head, t_node **dest_stack_head)
{
	if (*origin_stack_head == NULL)
		return ;
	t_node	*first_a;
	//t_node	*first_b;

	first_a = *origin_stack_head;
	*origin_stack_head = first_a->next;
	if (*origin_stack_head != NULL)
		(*origin_stack_head)->prev = NULL;
	//first_a->next->prev = 0;
	first_a->next = *dest_stack_head;
	if (*dest_stack_head!= NULL)
	{
		//first_b = *stack_head_b;
		(*dest_stack_head)->prev = first_a;
		//first_a->next = first_b;
		//first_b->prev = first_a;
	}
	*dest_stack_head = first_a;
	//else
	//{	
		//first_a->next = 0;
	//}
	first_a->prev = 0;
}
void	rotate(t_node **stack_head)
{
	t_node	*first;
	t_node	*last;

	first = *stack_head;
	last = *stack_head;
	if (*stack_head == NULL || (*stack_head)->next == NULL) //if it has less than 2 arguments
		return ;
	while (last->next != NULL)
		last = last->next;
	*stack_head = first->next;
	first->next->prev = 0; //NULL
	first->next = 0; //NULL
	first->prev = last;
	last->next = first;
}
//NOT TESTED!
void	rr(t_node **stack_head_a, t_node **stack_head_b)
{
	rotate(stack_head_a);
	rotate(stack_head_b);
}
void	rev_rotate(t_node **stack_head)
{
	t_node	*first;
	t_node	*last;

	first = *stack_head;
	last = *stack_head;
	if (*stack_head == NULL || (*stack_head)->next == NULL) //if it has less than 2 arguments
		return ;
	while (last->next != NULL)
		last = last->next;
	*stack_head = last;
	last->prev->next = 0;
	last->prev = 0; //NULL
	first->prev = last;
	last->next = first;
}
//NOT TESTED!
void	rrr(t_node **stack_head_a, t_node **stack_head_b)
{
	rev_rotate(stack_head_a);
	rev_rotate(stack_head_b);
}