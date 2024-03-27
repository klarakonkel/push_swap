/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:46:25 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/27 12:42:50 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "best_libft/libft.h"

typedef struct s_list
{
	void	*content;
	struct s_list	*next;
	struct s_list	*prev;
}					t_list;

int		ft_atoi(const char *str);
int		main(int argc, char *argv[]);
int		all_numbers(char *args[]);
int		no_repeat(char *args[]);
int		take_strings(); //delete after handling strings
int		check_limits(char *args[]);
void	insert_front();
void	insert_back(int content);
void	print_list();
void	delete_back();
int		ft_atoi(const char *str);
#endif