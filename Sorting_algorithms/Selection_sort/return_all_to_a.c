/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_all_to_a.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:33:35 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/08 14:33:36 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void    return_all_to_a(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
    while (stack_b->size > 0)
        pa(stack_a, stack_b, ops);
}