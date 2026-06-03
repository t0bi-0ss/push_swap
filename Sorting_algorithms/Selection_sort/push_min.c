#include "../../ft_pushswap.h"

/*Push node that contains lists minimum num found to a secondary one given its position*/
void push_min(t_stack *stack_to_push, t_stack *stack_to_extract, int min_position)
{
    if (min_position <= stack_to_extract->size / 2)
        while (min_position > 0)
        {
            rotate_elements(stack_to_extract);
            min_position--;
        }
    else
    {
        min_position = stack_to_extract->size - min_position;
        while (min_position > 0)
        {
            rotate_reverse(stack_to_extract);
            min_position--;
        }    
    }
    push_element(stack_to_push, stack_to_extract);
}
