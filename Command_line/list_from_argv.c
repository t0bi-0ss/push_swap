/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_from_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 17:45:08 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 19:55:54 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	free_arr(char ***arr);

int		handle_flag(char *argv, t_ops *ops);

/*Creates list while it checks for repetition,
	and calculates list size and disorder afterwards*/
int	list_from_argv(char **argv, t_stack *stack_a, t_ops *ops)
{
	char	**splitted;
	int		route;

	if (!argv || !stack_a)
		return (0);
	while (*argv)
	{
		route = handle_flag(*argv, ops);
		if (route == 1)
		{
			argv++;
			continue ;
		}
		else if (route == -1)
			return (clear_list(stack_a), 0);
		splitted = ft_split(*argv, ' ');
		if (!splitted)
			return (clear_list(stack_a), 0);
		if (!create_list(splitted, stack_a) || repetition_found(stack_a))
			return (clear_list(stack_a), free_arr(&splitted), 0);
		free_arr(&splitted);
		argv++;
	}
	if (calculate_disorder(stack_a) < 0)
		return (0);
	return (1);
}

void	free_arr(char ***arr)
{
	int	index;

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

int	handle_flag(char *argv, t_ops *ops)
{
	int	flag;

	flag = get_flag(argv);
	if (flag != 0)
	{
		if (apply_flag(flag, ops) != 0)
			return (1);
		else
			return (-1);
	}
	return (0);
}
