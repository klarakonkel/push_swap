#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	insert_front();
void	insert_back(int content);
void	print_list();
void	delete_back();
int		ft_atoi(const char *str);

struct node
{
	int	data;
	struct node *next;
	struct node *prev;
};
struct node *head; //head is a variable declared globally, outside of any function, so it is accessible from any function within the file
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
			insert_back(ft_atoi(argv[i]));
		}

print_list();
delete_back();
print_list();
}*/

void	insert_front()
{
	struct node *ptr;
	int	number;
	ptr = (struct node *)malloc(sizeof(struct node));
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
		ptr->data = number;
		head = ptr;
	}

	else
	{
		ptr->data = number;
		ptr->prev = NULL;
		ptr->next = head;
		head->prev = ptr;
		head=ptr;
	}
	printf("done\n");
}

void	print_list()
{
	struct node *ptr;
	printf("the list contains:\n");
	ptr = head;
	while (ptr != 0)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next;
	}
}

void	insert_back(int content)
{
	struct node *ptr;
	struct node *temp;
	ptr = (struct node *)malloc(sizeof(struct node));

	if  (!ptr)
		return ;
	ptr->data = content;
		if (head == 0)
		{
			ptr->next = 0;
			ptr->prev = 0;
			head = ptr;
		}
		else
		{
			temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next; //going to the last element of the list
			}
			temp->next = ptr;
			ptr->prev = temp;
			ptr->next = NULL;
		}
	printf("done\n");
}

void	delete_back()
{
	struct node *ptr;
	if (head == NULL)
		return ;
	else if (head->next == NULL)
	{
		head = NULL;
		free(head);
	}
	else 
	{
		ptr = head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->prev->next = NULL; //accesses the 'next' pointer of the node before the last node
		free(ptr);
	}

}