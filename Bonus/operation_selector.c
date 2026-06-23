/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_selector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 14:58:37 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:51:03 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	operation_selector(t_stack *stack_a, t_stack *stack_b, t_ops *ops,
			char *operation);

void	do_operations(t_stack *stack_a, t_stack *stack_b, t_ops *ops,
		char ***operations_list)
{
	int	index;

	index = 0;
	if (!stack_a || !stack_b || !ops || !operations_list)
		return ;
	ops->print_ops = 0;
	while ((*operations_list)[index])
	{
		operation_selector(stack_a, stack_b, ops, (*operations_list)[index]);
		index++;
	}
	free_arr(operations_list);
}

void	operation_selector(t_stack *stack_a, t_stack *stack_b, t_ops *ops,
		char *operation)
{
	if (!stack_a || !stack_b || !ops)
		return ;
	if (!ft_strncmp(operation, "pa", ft_strlen(operation)))
		pa(stack_a, stack_b, ops);
	else if (!ft_strncmp(operation, "pb", ft_strlen(operation)))
		pb(stack_b, stack_a, ops);
	else if (!ft_strncmp(operation, "ra", ft_strlen(operation)))
		ra(stack_a, ops);
	else if (!ft_strncmp(operation, "rb", ft_strlen(operation)))
		rb(stack_b, ops);
	else if (!ft_strncmp(operation, "rr", ft_strlen(operation)))
		rr(stack_a, stack_b, ops);
	else if (!ft_strncmp(operation, "rra", ft_strlen(operation)))
		rra(stack_a, ops);
	else if (!ft_strncmp(operation, "rrb", ft_strlen(operation)))
		rrb(stack_b, ops);
	else if (!ft_strncmp(operation, "rrr", ft_strlen(operation)))
		rrr(stack_a, stack_b, ops);
	else if (!ft_strncmp(operation, "sa", ft_strlen(operation)))
		sa(stack_a, ops);
	else if (!ft_strncmp(operation, "sb", ft_strlen(operation)))
		sb(stack_b, ops);
	else if (!ft_strncmp(operation, "ss", ft_strlen(operation)))
		ss(stack_a, stack_b, ops);
}
