#include "ft_pushswap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	if(!check_command_line(&argv[1], argc))
		return (1);
	t_stack stack_a;
	t_stack stack_b;

	//Initialize stacks
	init_stack(&stack_a, &stack_b);

	//Create list from argv and check for repetition
	if (!list_from_argv(&argv[1], &stack_a))
		return (1);
	
	//Print initial values
	test_initial_values(&stack_a);

	// Operations
	test_operations(&stack_a, &stack_b);

	// Clear List
	clear_list(&stack_a);
	clear_list(&stack_b);
	return (0);
}