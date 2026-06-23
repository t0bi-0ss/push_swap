/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 13:32:59 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:49:10 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	main(int argc, char **argv)
{
	char	**operations_list;
	t_stack	stack_a;
	t_stack	stack_b;
	t_ops	ops;

	if (!args_detecter(argc, &argv[1]) || !operations_checker(&operations_list))
	{
		error_message();
		return (-1);
	}
	if (!check_command_line(&argv[1], argc))
		return (-1);
	if (!init_structs(&stack_a, &stack_b, &ops) || !list_from_argv(&argv[1],
			&stack_a, &ops))
	{
		error_message();
		return (1);
	}
	do_operations(&stack_a, &stack_b, &ops, &operations_list);
	is_ordered(&stack_a, &stack_b);
	clear_lists(&stack_a, &stack_b);
	return (0);
}
