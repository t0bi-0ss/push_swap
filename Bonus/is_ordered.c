/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_ordered.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 15:19:18 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/23 16:51:07 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	is_ordered(t_stack *stack_a, t_stack *stack_b)
{
	if (!stack_a || !stack_b)
		return ;
	calculate_disorder(stack_a);
	if (!stack_a->disorder && !stack_b->head)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}
