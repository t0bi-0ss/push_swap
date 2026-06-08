/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:03:07 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/08 14:30:52 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Swap the first two elements at the top of both stack a and stack b.*/
void ss(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	swap_first_elements(stack_a);
	swap_first_elements(stack_b);
	ft_putstr("ss\n");
	ops->ss += 1;
	ops->total_operations += 1;
}