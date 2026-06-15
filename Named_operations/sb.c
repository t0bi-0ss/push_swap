/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/08 14:02:17 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:52:44 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

/*Swap the first two elements at the top of stack b.*/
void	sb(t_stack *stack_b, t_ops *ops)
{
	swap_first_elements(stack_b);
	ft_putstr("sb\n");
	ops->sb += 1;
	ops->total_operations += 1;
}
