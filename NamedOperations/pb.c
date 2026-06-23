/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:57:30 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:48:27 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Take the first element at the top of a and put it at the top of b.*/
void	pb(t_stack *stack_b, t_stack *stack_a, t_ops *ops)
{
	push_element(stack_b, stack_a);
	if (ops->print_ops)
		ft_putstr("pb\n");
	ops->pb += 1;
	ops->total_operations += 1;
}
