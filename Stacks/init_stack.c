
#include "../ft_pushswap.h"

void    init_stack(t_stack *stack_1, t_stack *stack_2)
{
    stack_1->disorder = 0;
    stack_1->head = NULL;
    stack_1->size = 0;
    stack_1->tail = NULL;
	stack_2->disorder = 0;
    stack_2->head = NULL;
    stack_2->size = 0;
    stack_2->tail = NULL;
}
