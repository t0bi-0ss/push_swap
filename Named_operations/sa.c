/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 13:59:01 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/08 14:30:47 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Swap the first two elements at the top of stack a.*/
void sa(t_stack *stack_a, t_ops *ops)
{
	swap_first_elements(stack_a);
	ft_putstr("sa\n");
	ops->sa += 1;
	ops->total_operations += 1;
}