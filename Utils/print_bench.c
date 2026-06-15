/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilbozhek <ilbozhek@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 19:46:09 by ilbozhek          #+#    #+#             */
/*   Updated: 2026/06/14 19:53:25 by ilbozhek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_pushswap.h"

void	ft_putstrategy(int strategy, int adaptive);
void	ft_printops(t_ops *ops);
void	fetch_ops_values(int *values, t_ops *ops);

void	print_bench(t_ops *ops, t_stack *stack)
{
	ft_putstr_stderr("[bench] disorder: ");
	ft_putdisorder(stack->disorder, 2);
	ft_putstr_stderr("\n");
	ft_putstr_stderr("[bench] strategy: ");
	ft_putstrategy(ops->strategy, ops->adaptative);
	ft_putstr_stderr("\n");
	ft_putstr_stderr("[bench] total_ops: ");
	ft_putnbr(ops->total_operations);
	ft_putstr_stderr("\n");
	ft_printops(ops);
}

void	ft_putstrategy(int strategy, int adaptive)
{
	if (adaptive == 1)
	{
		if (strategy == 1)
			ft_putstr_stderr("Adaptive / O(n²)");
		if (strategy == 2)
			ft_putstr_stderr("Adaptive / O(n√n)");
		if (strategy == 3)
			ft_putstr_stderr("Adaptive / O(n log n)");
	}
	else
	{
		if (strategy == 1)
			ft_putstr_stderr("Simple /  O(n²)");
		if (strategy == 2)
			ft_putstr_stderr("Medium / O(n√n)");
		if (strategy == 3)
			ft_putstr_stderr("Complex / O(n log n)");
	}
}

void	ft_printops(t_ops *ops)
{
	static char	*labels[] = {"sa:", "sb:", "ss:", "pa:", "pb:", "ra:", "rb:",
		"rr:", "rra:", "rrb:", "rrr:"};
	int			values[11];
	int			i;
	int			broke;

	fetch_ops_values(values, ops);
	i = 0;
	broke = 0;
	ft_putstr_stderr("[bench] ");
	while (i < 11)
	{
		if (labels[i][0] == 'r' && !broke)
		{
			ft_putstr_stderr("\n[bench] ");
			broke = 1;
		}
		ft_putstr_stderr(labels[i]);
		ft_putstr_stderr(" ");
		ft_putnbr(values[i]);
		ft_putstr_stderr(" ");
		i++;
	}
	ft_putstr_stderr("\n");
}

void	fetch_ops_values(int *values, t_ops *ops)
{
	values[0] = ops->sa;
	values[1] = ops->sb;
	values[2] = ops->ss;
	values[3] = ops->pa;
	values[4] = ops->pb;
	values[5] = ops->ra;
	values[6] = ops->rb;
	values[7] = ops->rr;
	values[8] = ops->rra;
	values[9] = ops->rrb;
	values[10] = ops->rrr;
}
