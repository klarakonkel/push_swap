/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 13:08:01 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/27 09:44:59 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
		return (0); //subject! NULL?
	/*if (argc == 2) // what if only one int is passed as a parameter?
	{
		return(argv[1]);
	}*/
	if (all_numbers(argv) == -1 || no_repeat(argv) == -1 || check_limits(argv) == -1)
	{
		printf("wrong arguments\n");
		write(-1, "Error\n", 6);
		return (-1);
	}
	else
	{
		printf("correct arguments\n");
		while (argv[++i])
		{
			insert_back(ft_atoi(argv[i]));
		}
	}
	print_list();
	return (0);
}
int	take_strings()
{
	printf("nothing is being done with strings yet");
	return 0;
}

int	all_numbers(char *args[])
{
	int	i;
	int	j;

	i = 0;
	while (args[++i])
	{
		j = 0;
		while (args[i][j])
		{
			if (args[i][0] == '-') //if it's a -
			{
				if (ft_isdigit(args[i][1]) == 0) //and the next char is not a digit
					return (-1);
			}
			else if (ft_isdigit(args[i][j]) != 1) //if it is not a digit
			{
				return (-1);
			}
			j++;
		}
	}
	return (0);
}

int	check_limits(char *args[])
{
	int	i;

	i = 0;
	while (args[++i])
	{
		if (args[i][0] == '-') //if the number is negative
		{
			if (ft_strlen(args[i]) > 11)
				return (-1);
			if (ft_strlen(args[i]) == 11)
			{
				if (ft_strncmp(args[i], "-2147483648", 11) > 0)
					return (-1);
			}
		}
		else
		{
			if (ft_strlen(args[i]) > 10)
				return (-1);
			if (ft_strlen(args[i]) == 10)
			{
				if (ft_strncmp(args[i], "2147483647", 10) > 0)
				return (-1);
			}
		}
	}
	return (0);
}

int	no_repeat(char *args[])
{
	int i;
	int	j;

	i = 0;
	while (args[++i])
	{
		j = 1;
		while (args[i + j])
		{
			if (ft_strlen(args[i]) == ft_strlen(args[i + j])) //if they are of equal length
			{
				if (ft_strncmp(args[i], args[i + j], ft_strlen(args[i])) == 0) //and they are identical
					return (-1);
			}
			j++;
		}
	}
	return (0);
}