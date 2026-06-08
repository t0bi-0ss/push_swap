#include "../ft_pushswap.h"

void    test_selection_sort(t_stack *stack_a, t_stack *stack_b, t_ops *ops)
{
    ft_putstr("\n_____________________________________________________________\n");
    ft_putstr("-------------------->Selection sort test<--------------------\n\n");

    // Push all elements to stack b
    ft_putstr("\n______________PUSH ELEMENTS TO STACK 'B'______________\n");
    push_all_to_b(stack_a, stack_b, ops);
    ft_putstr("\nStack a values after push all to 'b':\n\n");
	print_node_value(stack_a);
	ft_putstr("\nStack b values after push all to 'b':\n\n");
	print_node_value(stack_b);    

    // Push all elements to stack b
    ft_putstr("\n______________PUSH ELEMENTS TO STACK 'A'______________\n");
    return_all_to_a(stack_a, stack_b, ops);
    ft_putstr("\nStack a values after push all to 'a':\n\n");
	print_node_value(stack_a);
	ft_putstr("\nStack b values after push all to 'a':\n\n");
	print_node_value(stack_b);    
}