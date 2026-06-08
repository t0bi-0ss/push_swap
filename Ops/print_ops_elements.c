#include "../ft_pushswap.h"
#include <stdio.h>

void    print_ops_elements(t_ops *ops)
{
    ft_putstr("\n_____________________________________________________________");
	ft_putstr("\n-------------------->Ops elements<--------------------\n\n");
    
    printf("strategy: \n");

    printf("total_operations: %i\n", ops->total_operations);

    printf("sa: %i\n", ops->sa);
    
    printf("sb: %i\n", ops->sb);


    printf("ss: %i\n", ops->ss);


    printf("pa: %i\n", ops->pa);

    printf("pb: %i\n", ops->pb);

    printf("ra: %i\n", ops->ra);


    printf("rb: %i\n", ops->rb);


    printf("rr: %i\n", ops->rr);


    printf("rra: %i\n", ops->rra);


    printf("rrb: %i\n", ops->rrb);


    printf("rrr: %i\n", ops->rrr);

}