/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:21:55 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:48:46 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift down all elements of both stack a and stack b by one.*/
void	rrr(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	rotate_reverse(stack_a);
	rotate_reverse(stack_b);
	if (ops->print_ops)
		ft_putstr("rrr\n");
	ops->rrr += 1;
	ops->total_operations += 1;
}
