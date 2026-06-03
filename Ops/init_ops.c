#include "../ft_pushswap.h"

void init_ops(t_ops *ops)
{
    ops->strategy = NULL;
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
}