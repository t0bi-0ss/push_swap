/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:16:53 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:48:32 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift up all elements of stack a by one.*/
void	ra(t_stack *stack_a, t_ops *ops)
{
	rotate_elements(stack_a);
	if (ops->print_ops)
		ft_putstr("ra\n");
	ops->ra += 1;
	ops->total_operations += 1;
}
