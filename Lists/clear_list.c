/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:58:45 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/02 13:44:13 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	clear_list(t_stack *stack)
{
	t_list *current;
	t_list *next;

	if (!stack || !stack->head)
	{
		fail_clear_list();
		return ;
	}
	current = stack->head;
	stack->head->prev->next = NULL;
	while(current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	stack->head = NULL;
}
