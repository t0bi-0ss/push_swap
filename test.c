#include "ft_pushswap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if(!check_command_line(&argv[1], argc))
		return (1);
	t_stack stack_a;
	t_stack stack_b;
	t_ops ops;

	//Initialize stacks
	init_stack(&stack_a, &stack_b);

	//Initialize ops
	init_ops(&ops);

	//Create list from argv and check for repetition, calculate disorder and list size at the end
	if (!list_from_argv(&argv[1], &stack_a))
		return (1);
	
	//Print initial values
	test_initial_values(&stack_a);

	// Operations
	//test_operations(&stack_a, &stack_b, &ops);

	// Min position

	//min_position(&stack_a);

	// Selection Sort
	test_selection_sort(&stack_a, &stack_b, &ops);

	// Chunk Sort
	//test_chunk_sort(&stack_a, &stack_b, &ops);

	// Radix Sort 
	//test_radix_sort(&stack_a, &stack_b, &ops);

	//Print ops elements
	print_ops_elements(&ops);

	calculate_disorder(&stack_a);
	ft_putstr("\n______________STACK 'A' DISORDER AFTER SORT______________\n\n");
	ft_putdisorder(stack_a.disorder, 2);

	// Clear List
	clear_list(&stack_a);
	clear_list(&stack_b);
	return (0);
}
