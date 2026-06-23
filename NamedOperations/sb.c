/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:02:17 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:48:52 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Swap the first two elements at the top of stack b.*/
void	sb(t_stack *stack_b, t_ops *ops)
{
	swap_first_elements(stack_b);
	if (ops->print_ops)
		ft_putstr("sb\n");
	ops->sb += 1;
	ops->total_operations += 1;
}
