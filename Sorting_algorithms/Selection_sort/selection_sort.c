/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 19:22:15 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 19:58:18 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../ft_pushswap.h"

void	selection_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	max_position;

	max_position = look_for_max_position(stack_a, look_for_max(stack_a));
}