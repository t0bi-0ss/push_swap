/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_from_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:45:08 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/10 20:03:19 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	free_arr(char ***arr);

/*Creates list while it checks for repetition, and calculates list size and disorder afterwards*/
int	list_from_argv(char **argv, t_stack *stack_a)
{
	char **splitted;

	if (!argv || !stack_a)
		return (0);
	while (*argv)
	{
		if (!(splitted = ft_split(*argv, ' ')))
			return (0);
		if(!create_list(splitted, stack_a) || repetition_found(stack_a))
		{
			clear_list(stack_a);
			free_arr(&splitted);
			return (0);
		}
		free_arr(&splitted);
		argv++;
	}
	if (calculate_disorder(stack_a) < 0)
		return (0);
	return (1);
}

void	free_arr(char ***arr)
{
	int index;

	if (!arr)
		return ;
	index = 0;
	while ((*arr)[index])
	{
		free((*arr)[index]);
		(*arr)[index] = NULL;
		index++;
	}
	free(*arr);
	*arr = NULL;
}