/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_from_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:45:08 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 15:39:23 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	free_arr(char **arr);

/*Creates list while it checks for repetition, and calculates list size and disorder*/
int	list_from_argv(char **argv, t_stack *stack)
{
	char **splitted;

	while (*argv)
	{
		splitted = ft_split(*argv, ' ');
		if(!create_list(splitted, stack) || repetition_found(stack))
		{
			clear_list(stack);
			free_arr(splitted);
			free(splitted);
			return (0);
		}
		free_arr(splitted);
		free(splitted);
		splitted = NULL;
		argv++;
	}
	calculate_disorder(stack);
	return (1);
}

void	free_arr(char **arr)
{
	while (*arr)
	{
		free(*arr);
		arr++;
	}
}