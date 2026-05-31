
#include "../ft_pushswap.h"

void    init_stack(t_stack *stack)
{
    stack->disorder = 0;
    stack->head = NULL;
    stack->size = 0;
    stack->tail = NULL;
}