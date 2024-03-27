/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prepare_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkonkel <kkonkel@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 18:18:14 by kkonkel           #+#    #+#             */
/*   Updated: 2024/03/02 18:40:54 by kkonkel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;
	char	**one_array;
	int	input_type; //0 for loose numbers, 1 for one long array

	i = 0;
	if (argc < 2)
		return (-1); //subject!

	while (argv[++i])
	{
		char	*argument_array;
		while (argv[i])
		{
			argument_array = 
		}
		
	}
	return (0);
}