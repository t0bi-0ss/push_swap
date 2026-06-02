#include "../ft_pushswap.h"

void	test_operations(t_stack *stack_a, t_stack *stack_b)
{
	ft_putstr("\n-------------------->Operations<--------------------\n");

	//Push
	ft_putstr("\n______________PUSH______________\n");
	ft_putstr("\nPush stack_a's first 2 elements to stack_b:\n");

	ft_putstr("\nStack a values before push:\n\n");
	print_node_value(stack_a);

	ft_putstr("\nStack b values before push:\n\n");
	print_node_value(stack_b);

	push_element(stack_b, stack_a);
	push_element(stack_b, stack_a);

	ft_putstr("________________\n");
	
	ft_putstr("\nStack a values after push:\n\n");
	print_node_value(stack_a);

	ft_putstr("\nStack b values after push:\n\n");
	print_node_value(stack_b);

	//Swap
	ft_putstr("\n______________SWAP______________\n");
	
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

	//Simultaneous Swap
	ft_putstr("\n______________SIMULTANEOUS SWAP______________\n");
	
	ft_putstr("\nStack a values before swap:\n\n");
	print_node_value(stack_a);
	
	ft_putstr("\nStack b values before swap:\n\n");
	print_node_value(stack_b);
	
		//SS
	simultaneous_swap(stack_a, stack_b);

	ft_putstr("\nStack a values after swap:\n\n");
	print_node_value(stack_a);

	ft_putstr("\nStack b values after swap:\n\n");
	print_node_value(stack_b);

	//Rotate elements
	ft_putstr("\n______________ROTATE ELEMENTS______________\n");

	ft_putstr("\nStack a values before rotation:\n\n");
	print_node_value(stack_a);
	
	ft_putstr("\nStack b values before rotation:\n\n");
	print_node_value(stack_b);

		//ROTATE
	rotate_elements(stack_a);
	rotate_elements(stack_b);

	ft_putstr("\nStack a values after rotation:\n\n");
	print_node_value(stack_a);
	
	ft_putstr("\nStack b values after rotation:\n\n");
	print_node_value(stack_b);

	//Rotate simultaneous
	ft_putstr("\n______________SIMULTANEOUS ROTATE______________\n");

	ft_putstr("\nStack a values before simultaneous rotation:\n\n");
	print_node_value(stack_a);
	
	ft_putstr("\nStack b values before simultaneous rotation:\n\n");
	print_node_value(stack_b);

		//SR
	rotate_simultaneous(stack_a, stack_b);

	ft_putstr("\nStack a values after simultaneous rotation:\n\n");
	print_node_value(stack_a);
	
	ft_putstr("\nStack b values after simultaneous rotation:\n\n");
	print_node_value(stack_b);

	//Reverse rotate elements
	ft_putstr("\n______________REVERSE ROTATE ELEMENTS______________\n");

	ft_putstr("\nStack a values before reverse rotation:\n\n");
	print_node_value(stack_a);
	
	ft_putstr("\nStack b values before reverse rotation:\n\n");
	print_node_value(stack_b);

		//REVERSE ROTATE
	rotate_reverse(stack_a);
	rotate_reverse(stack_b);

	ft_putstr("\nStack a values after reverse rotation:\n\n");
	print_node_value(stack_a);
	
	ft_putstr("\nStack b values after reverse rotation:\n\n");
	print_node_value(stack_b);

	//Rotate simultaneous
	ft_putstr("\n______________SIMULTANEOUS REVERSE ROTATE______________\n");

	ft_putstr("\nStack a values before reverse simultaneous rotation:\n\n");
	print_node_value(stack_a);
	
	ft_putstr("\nStack b values before reverse simultaneous rotation:\n\n");
	print_node_value(stack_b);

		//SR
	rotate_reverse_simultaneous(stack_a, stack_b);

	ft_putstr("\nStack a values after reverse simultaneous rotation:\n\n");
	print_node_value(stack_a);
	
	ft_putstr("\nStack b values after reverse simultaneous rotation:\n\n");
	print_node_value(stack_b);

	ft_putstr("\n");
}