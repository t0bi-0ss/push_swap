#include "../ft_pushswap.h"

void	test_initial_values(t_stack *stack)
{
	ft_putstr("\n_____________________________________________________________");
	ft_putstr("\n-------------------->Stack 'a' initial values<--------------------\n\n");
	print_node_value(stack);
	ft_putstr("\nStack a size: ");
	ft_putnbr(stack->size);
	ft_putstr("\n");
	ft_putstr("\nStack a disorder: ");
	ft_putdisorder(stack->disorder, 2);
	ft_putstr("\n");
}