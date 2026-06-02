#include "../ft_pushswap.h"

void	test_operations(t_stack *stack_a, t_stack *stack_b)
{
	ft_putstr("\n-------------------->Operations<--------------------\n");

	//Push
	ft_putstr("\n__________PUSH_________\n");
	ft_putstr("\nPush stack_a's first 2 elements to stack_b:\n");

	ft_putstr("\nStack a values before push:\n\n");
	print_node_value(stack_a);

	ft_putstr("\nStack b values before push:\n\n");
	print_node_value(stack_b);

	push_element(stack_b, stack_a);
	push_element(stack_b, stack_a);

	ft_putstr("\nStack a values after push:\n\n");
	print_node_value(stack_a);

	ft_putstr("\nStack b values after push:\n\n");
	print_node_value(stack_b);

	//Swap
	ft_putstr("\n__________SWAP_________\n");
	
	ft_putstr("\nStack a values before swap:\n\n");
	print_node_value(stack_a);
	swap_first_elements(stack_a);
	ft_putstr("\nStack a values after swap:\n\n");
	print_node_value(stack_a);

	swap_first_elements(stack_b);
	ft_putstr("\nStack b values before swap:\n\n");
	print_node_value(stack_b);
	swap_first_elements(stack_b);
	ft_putstr("\nStack b values after swap:\n\n");
	print_node_value(stack_b);

	ft_putstr("\n");
}