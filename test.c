#include "ft_pushswap.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(int argc, char **argv)
{
	if(!check_command_line(&argv[1], argc))
		return (1);
	t_stack stack_a;
	t_stack stack_b;
	t_ops ops;
	float original_disorder;

	//Initialize structs
	init_structs(&stack_a, &stack_b, &ops);

	//Create list from argv and check for repetition, calculate disorder and list size at the end
	if (!list_from_argv(&argv[1], &stack_a))
		return (1);

	original_disorder = stack_a.disorder;
	if (stack_a.disorder < 0.2)
		test_selection_sort(&stack_a, &stack_b, &ops);
	else if (stack_a.disorder >= 0.2 && stack_a.disorder < 0.5)
		test_chunk_sort(&stack_a, &stack_b, &ops);
	else
		test_radix_sort(&stack_a, &stack_b, &ops);
	//Print initial values
	//test_initial_values(&stack_a);

	// Operations
	//test_operations(&stack_a, &stack_b, &ops);

	// Min position

	//min_position(&stack_a);

	// Selection Sort
	// test_selection_sort(&stack_a, &stack_b, &ops);
	//1500

	// Chunk Sort
	//test_chunk_sort(&stack_a, &stack_b, &ops);
	//808

	// Radix Sort 
	//test_radix_sort(stack_a, stack_b, &ops);
	//1081

	//Print ops elements
	print_ops_elements(&ops);

	ft_putstr("\n______________STACK 'A' DISORDER BEFORE SORT______________\n\n");
	ft_putdisorder(original_disorder, 2);
	calculate_disorder(&stack_a);
	ft_putstr("\n______________STACK 'A' DISORDER AFTER SORT______________\n\n");
	ft_putdisorder(stack_a.disorder, 2);

	// Clear List
	clear_list(&stack_a);
	clear_list(&stack_b);

	return (0);
}
