#include "../ft_pushswap.h"
#include <stdio.h>

void    print_ops_elements(t_ops *ops)
{
    ft_putstr("\n_____________________________________________________________");
	ft_putstr("\n-------------------->Ops elements<--------------------\n\n");
    
    ft_putstr("strategy: ");
    ft_putstr("\n");

    ft_putstr("total_operations: ");
    printf("%i", ops->total_operations);
    ft_putstr("\n");

    ft_putstr("sa: ");
    
    ft_putstr("\n");

    ft_putstr("sb: ");

    ft_putstr("\n");

    ft_putstr("ss: ");

    ft_putstr("\n");

    ft_putstr("pa: ");
    printf("%i", ops->pa);
    ft_putstr("\n");

    ft_putstr("pb: ");
    printf("%i", ops->pb);
    ft_putstr("\n");

    ft_putstr("ra: ");

    ft_putstr("\n");

    ft_putstr("rb: ");

    ft_putstr("\n");

    ft_putstr("rr: ");

    ft_putstr("\n");

    ft_putstr("rra: ");

    ft_putstr("\n");

    ft_putstr("rrb: ");

    ft_putstr("\n");

    ft_putstr("rrr: ");
}