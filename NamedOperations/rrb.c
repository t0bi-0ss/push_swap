/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:21:35 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:48:44 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift down all elements of stack b by one.*/
void	rrb(t_stack *stack_b, t_ops *ops)
{
	rotate_reverse(stack_b);
	if (ops->print_ops)
		ft_putstr("rrb\n");
	ops->rrb += 1;
	ops->total_operations += 1;
}
