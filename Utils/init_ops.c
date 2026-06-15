/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_ops.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 20:43:46 by tsordo-o          #+#    #+#             */
/*   Updated: 2026/06/14 17:55:11 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

int	init_ops(t_ops *ops)
{
	if (!ops)
		return (0);
	ops->strategy = 0;
	ops->bench = 0;
	ops->adaptative = 0;
	ops->total_operations = 0;
	ops->sa = 0;
	ops->sb = 0;
	ops->ss = 0;
	ops->pa = 0;
	ops->pb = 0;
	ops->ra = 0;
	ops->rb = 0;
	ops->rr = 0;
	ops->rra = 0;
	ops->rrb = 0;
	ops->rrr = 0;
	return (1);
}
