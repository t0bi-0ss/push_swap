/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsordo-o <tsordo-o@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/25 09:26:03 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/05/28 11:11:43 by tsordo-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_new_node(int num);
int	ft_insert_new_node(t_stack *stack, t_list *new_node);

int	create_list(char **argv, t_stack *stack)
{
	t_list *new_node;
	int num;

	new_node = NULL;
	while (*argv)
	{
		num = ft_atoi(*argv);
		new_node = ft_new_node(num);
		if (!new_node)
		{
			clear_list(&(stack->head));
			return (0);
		}
		if (!(ft_insert_new_node(stack, new_node)))
			return (0);
	}
}

int	ft_insert_new_node(t_stack *stack, t_list *new_node)
{
	t_list	*tmp_head;
	t_list	*tmp_prev;

	if (!new_node || !stack)
		return (insert_node_fail(), 0);
	tmp_head = NULL;
	tmp_prev = NULL;
	if (!(stack)->head)
	{
		(stack)->head = new_node;
		new_node->next = new_node;
		new_node->prev = new_node;
	}
	else
	{
		new_node->prev = stack->head->prev;
		stack->head->prev->next = new_node;
		new_node->next = stack->head;
		stack->head->prev = new_node;
	}
	return (1);
}

t_list	*ft_new_node(int num)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (node_error(), NULL);
	new_node->num = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}