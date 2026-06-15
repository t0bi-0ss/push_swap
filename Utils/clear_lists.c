/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_lists.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:27:26 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:54:37 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	clear_lists(t_stack *stack_a, t_stack *stack_b)
{
	clear_list(stack_a);
	clear_list(stack_b);
}
