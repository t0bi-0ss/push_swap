/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_element.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:37:59 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 14:37:41 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	push_element(t_stack *stack_to_push, t_stack *stack_to_extract)
{
	t_list *extracted;
	
	if (!stack_to_extract->head)
		return ;
	extracted = extract_first(stack_to_extract);
	ft_add_front(stack_to_push, extracted);
}
