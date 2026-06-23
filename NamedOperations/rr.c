/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:19:10 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:48:38 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Shift up all elements of both stack a and stack b by one.*/
void	rr(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	rotate_elements(stack_a);
	rotate_elements(stack_b);
	if (ops->print_ops)
		ft_putstr("rr\n");
	ops->rr += 1;
	ops->total_operations += 1;
}
