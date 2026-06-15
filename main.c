/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:30:18 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:55:26 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	main(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	t_ops	ops;

	if (!check_command_line(&argv[1], argc))
		return (1);
	if (!init_structs(&stack_a, &stack_b, &ops) || !list_from_argv(&argv[1],
			&stack_a, &ops))
	{
		error_message();
		return (1);
	}
	if (ops.strategy == 0)
		ops.adaptative = 1;
	algorithm_selection(&stack_a, &stack_b, &ops);
	if (ops.bench == 1)
		print_bench(&ops, &stack_a);
	clear_lists(&stack_a, &stack_b);
	return (0);
}
