/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_structs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 15:57:21 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:55:13 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	init_structs(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
	if (!init_ops(ops) || !init_stack(stack_a, stack_b))
		return (0);
	return (1);
}
