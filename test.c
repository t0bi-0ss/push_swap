#include <stdio.h>
#include <stdlib.h>
#include "ft_pushswap.h"

int	main(int argc, char **argv)
{
	(void) argc;

	int res = check_command_line(&argv[1]);
	if (!res)
	{
		return (1);
	}
	else
		printf("Valid argument\n");
	t_stack stack_a;

	stack_a.disorder = 0;
	stack_a.head = NULL;
	stack_a.size = 0;
	stack_a.tail = NULL;
	list_from_argv(&argv[1], &stack_a);
	print_node_value(&stack_a);
	return (0);
}