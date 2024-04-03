#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

//void	insert_front();
void	add_node(t_node **stack_head, int content);
void	print_list(t_node **stack_head);
void	delete_back(t_node **stack_head);
int		ft_atoi(const char *str);

//struct node *head; //head is a variable declared globally, outside of any function, so it is accessible from any function within the file
/*
int	main(int argc, char *argv[])
{
		struct node *new;
		struct node *old;
		int i;

		i = 0;
		if (argc < 2)
			return (-1);
		while (argv[++i])
		{
			add_node(ft_atoi(argv[i]));
		}

print_list();
delete_back();
print_list();
}*/
/*
void	insert_front() //fix for head
{
	t_node *ptr;
	int	number;
	ptr = (t_node *)malloc(sizeof(t_node));
	if  (!ptr)
		return ;
	else
	{
		printf("enter node value\n");
		scanf("%d", &number);
	}
	if (head == 0)
	{
		ptr->next = 0;
		ptr->prev = 0;
		ptr->content = number;
		head = ptr;
	}
	else
	{
		ptr->content = number;
		ptr->prev = NULL;
		ptr->next = head;
		head->prev = ptr;
		head=ptr;
	}
	printf("done\n");
}*/

void	print_list(t_node **stack_head)
{
	t_node *ptr;
	printf("the list contains:\n");
	ptr = *stack_head;
	while (ptr != 0)
	{
		printf("%d\n", ptr->content);
		ptr = ptr->next;
	}
}

void	add_node(t_node **stack_head, int content) //takes a pointer to the head of the stack
{
	t_node *node;
	t_node *temp;
	node = malloc(sizeof(t_node));

	if  (!stack_head || !node)
		return ;
	node->content = content;
	node->next = NULL;
	printf("%d\n", node->content);
		if (!(*stack_head))
		{
			*stack_head = node;
			node->prev = 0; //well NULL actually but Mac
		}
		else
		{
			temp = *stack_head;
			while (temp->next != NULL)
			{
				temp = temp->next; //going to the last element of the list
			}
			temp->next = node;
			node->prev = temp;
		}
	printf("done\n");
}

void	delete_back(t_node **stack_head)
{
	t_node *ptr;
	if (!*stack_head)
		return ;
	else if ((*stack_head)->next == NULL)
	{
		*stack_head = NULL;
		free(*stack_head);
	}
	else 
	{
		ptr = *stack_head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->prev->next = NULL; //accesses the 'next' pointer of the node before the last node
		free(ptr);
	}

}