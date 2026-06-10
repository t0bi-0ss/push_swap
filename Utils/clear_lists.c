/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_lists.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:27:26 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/10 17:28:01 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	clear_lists(t_stack *stack_a, t_stack *stack_b)
{
	clear_list(stack_a);
	clear_list(stack_b);
}