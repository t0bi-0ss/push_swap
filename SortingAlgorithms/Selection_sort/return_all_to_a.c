/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_all_to_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:39:19 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/19 19:20:33 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	return_all_to_a(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	if (!stack_a || !stack_b || !ops || !stack_a->head)
		return ;
	while (stack_b->size > 0)
		pa(stack_a, stack_b, ops);
}
