#include "../../ft_pushswap.h"

void    push_all_to_a(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
    while (stack_b->size > 0)
        push_element(stack_a, stack_b);
    ops->pb += 1;
	ops->total_operations += 1;
}