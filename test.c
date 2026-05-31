#include <stdio.h>
#include <stdlib.h>
#include "ft_pushswap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putstr("No arguments were passed\n");
		return (1);
	}
	int res = check_command_line(&argv[1]);
	if (!res)
	{
		return (1);
	}
	else
		printf("Argument is valid\n");
	t_stack stack_a;

	init_stack(&stack_a);
	list_from_argv(&argv[1], &stack_a);
	print_node_value(&stack_a);

	// Stack elements
	stack_a.disorder = calculate_disorder(&stack_a);
	ft_putstr("Stack a size: ");
	ft_putnbr(stack_a.size);
	ft_putstr("\n");
	ft_putstr("Stack a disorder: ");
	ft_putdisorder(stack_a.disorder, 2);
	if (repetition_found(&stack_a))
		ft_putstr("Repetition was found\n");
	// Clear List
	clear_list(&stack_a);
	return (0);
}