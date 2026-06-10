/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 16:30:18 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/10 20:11:21 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_pushswap.h"

int	push_swap(int argc, char **argv)
{
	t_stack	stack_a;
	t_stack	stack_b;
	t_ops	ops;

	if (!check_command_line(&argv[1], argc))
		return (1);
	if (!init_structs(&stack_a, &stack_b, &ops) || !list_from_argv(&argv[1],
			&stack_a))
	{
		error_message();
		return (1);
	}
	algorithm_selection(&stack_a, &stack_b, &ops);
	clear_lists(&stack_a, &stack_b);
	return (0);
}
