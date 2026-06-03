
#include "../ft_pushswap.h"
#include <stdio.h>

void    min_position(t_stack *stack)
{
    int	max_position;
    int max;

    ft_putstr("\n_____________________________________________________________");
    ft_putstr("\n-------------------->Stack 'a' min value and its position<--------------------\n\n");
    max = look_for_min(stack);
	max_position = look_for_min_position(stack, max);
    printf("Max is: %i\n", max);
    printf("Position is: %i\n", max_position);
}