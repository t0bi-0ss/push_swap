NAME = push_swap
NAME_BONUS = checker
CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = CommandLine/check_for_invalid_input.c \
	CommandLine/list_from_argv.c \
	Lists/add_front.c \
	Lists/clear_list.c \
	Lists/create_list.c \
	Lists/extract_first.c \
	Lists/insert_node.c \
	Lists/new_node.c \
	NamedOperations/pa.c \
	NamedOperations/pb.c \
	NamedOperations/ra.c \
	NamedOperations/rb.c \
	NamedOperations/rra.c \
	NamedOperations/rrb.c \
	NamedOperations/rr.c \
	NamedOperations/rrr.c \
	NamedOperations/sa.c \
	NamedOperations/sb.c \
	NamedOperations/ss.c \
	Operations/push_element.c \
	Operations/rotate_elements.c \
	Operations/rotate_reverse.c \
	Operations/swap_first_elements.c \
	main.c \
	SortingAlgorithms/algorithm_selection.c \
	SortingAlgorithms/Chunk_sort/chunk_sort.c \
	SortingAlgorithms/Chunk_sort/chunks_to_b.c \
	SortingAlgorithms/Chunk_sort/get_chunks_size.c \
	SortingAlgorithms/Chunk_sort/look_for_max_position.c \
	SortingAlgorithms/Chunk_sort/push_max.c \
	SortingAlgorithms/Radix_sort/bit_set_sort.c \
	SortingAlgorithms/Radix_sort/max_bits.c \
	SortingAlgorithms/Radix_sort/radix_sort.c \
	SortingAlgorithms/Selection_sort/look_for_min.c \
	SortingAlgorithms/Selection_sort/look_for_min_position.c \
	SortingAlgorithms/Selection_sort/push_all_to_b.c \
	SortingAlgorithms/Selection_sort/push_min.c \
	SortingAlgorithms/Selection_sort/return_all_to_a.c \
	SortingAlgorithms/Selection_sort/selection_sort.c \
	SortingAlgorithms/Utils/assign_index.c \
	SortingAlgorithms/Utils/get_minimum_node.c \
	SortingAlgorithms/Utils/look_for_max.c \
	SortingAlgorithms/Utils/push_all_largest_to_a.c \
	SortingAlgorithms/Utils/push_all_to_a.c \
	SortingAlgorithms/Utils/sort_three.c \
	SortingAlgorithms/Utils/sort_five.c \
	SortingAlgorithms/Utils/sort_four.c \
	SortingAlgorithms/Utils/sort_six.c \
	SortingAlgorithms/Utils/select_by_size.c \
	SortingAlgorithms/Utils/all_indexes_to_zero.c \
	Stacks/calculate_disorder.c \
	Stacks/check_repetition.c \
	Stacks/init_stack.c \
	Utils/clear_lists.c \
	Utils/error_message.c \
	Utils/ft_atol.c \
	Utils/ft_isdigit.c \
	Utils/ft_isspace.c \
	Utils/ft_putdisorder.c \
	Utils/ft_putnbr.c \
	Utils/ft_putstr.c \
	Utils/ft_split.c \
	Utils/ft_sqrt.c \
	Utils/ft_strlen.c \
	Utils/ft_strncmp.c \
	Utils/init_ops.c \
	Utils/init_structs.c \
	Utils/print_bench.c \
	Utils/flags_compare.c \
	Utils/ft_putstr_stderr.c \
	Utils/args_detecter.c \
	Utils/free_arr.c
SRCS_BONUS = CommandLine/check_for_invalid_input.c \
	CommandLine/list_from_argv.c \
	Bonus/get_next_line_utils.c \
	Bonus/get_next_line.c \
	Bonus/is_ordered.c \
	Bonus/main_bonus.c \
	Bonus/operation_selector.c \
	Bonus/operations_checker.c \
	Bonus/read_operations.c \
	Lists/add_front.c \
	Lists/clear_list.c \
	Lists/create_list.c \
	Lists/extract_first.c \
	Lists/insert_node.c \
	Lists/new_node.c \
	NamedOperations/pa.c \
	NamedOperations/pb.c \
	NamedOperations/ra.c \
	NamedOperations/rb.c \
	NamedOperations/rra.c \
	NamedOperations/rrb.c \
	NamedOperations/rr.c \
	NamedOperations/rrr.c \
	NamedOperations/sa.c \
	NamedOperations/sb.c \
	NamedOperations/ss.c \
	Operations/push_element.c \
	Operations/rotate_elements.c \
	Operations/rotate_reverse.c \
	Operations/swap_first_elements.c \
	Stacks/calculate_disorder.c \
	Stacks/check_repetition.c \
	Stacks/init_stack.c \
	Utils/clear_lists.c \
	Utils/error_message.c \
	Utils/ft_atol.c \
	Utils/ft_isdigit.c \
	Utils/ft_isspace.c \
	Utils/ft_putstr.c \
	Utils/ft_split.c \
	Utils/ft_strlen.c \
	Utils/ft_strncmp.c \
	Utils/init_ops.c \
	Utils/init_structs.c \
	Utils/flags_compare.c \
	Utils/ft_putstr_stderr.c \
	Utils/args_detecter.c \
	Utils/free_arr.c
OBJDIR = Objects
OBJDIR_BONUS = ObjectsBonus
VPATH = $(sort $(dir $(SRCS) $(SRCS_BONUS)))
OBJS = $(addprefix $(OBJDIR)/,$(notdir $(SRCS:.c=.o)))
OBJS_BONUS = $(addprefix $(OBJDIR_BONUS)/,$(notdir $(SRCS_BONUS:.c=.o)))

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.c ft_pushswap.h
	@mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

bonus: $(NAME_BONUS)

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) $(OBJS_BONUS) -o $(NAME_BONUS)

$(OBJDIR_BONUS)/%.o: %.c ft_pushswap.h
	@mkdir -p $(OBJDIR_BONUS)
	$(CC) $(CFLAGS) -c $< -o $@

cleanbonus:
	@rm -rf $(OBJDIR_BONUS)

fcleanbonus: cleanbonus
	@rm -f $(NAME_BONUS)

rebonus: fcleanbonus $(NAME_BONUS)

.PHONY: all clean fclean re bonus cleanbonus fcleanbonus rebonus
