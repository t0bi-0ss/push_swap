NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
SRCS = Command_line/check_for_invalid_input.c \
	Command_line/list_from_argv.c \
	Lists/add_front.c \
	Lists/clear_list.c \
	Lists/create_list.c \
	Lists/extract_first.c \
	Lists/insert_node.c \
	Lists/new_node.c \
	Named_operations/pa.c \
	Named_operations/pb.c \
	Named_operations/ra.c \
	Named_operations/rb.c \
	Named_operations/rra.c \
	Named_operations/rrb.c \
	Named_operations/rr.c \
	Named_operations/rrr.c \
	Named_operations/sa.c \
	Named_operations/sb.c \
	Named_operations/ss.c \
	Operations/push_element.c \
	Operations/rotate_elements.c \
	Operations/rotate_reverse.c \
	Operations/swap_first_elements.c \
	main.c \
	Sorting_algorithms/algorithm_selection.c \
	Sorting_algorithms/Chunk_sort/chunk_sort.c \
	Sorting_algorithms/Chunk_sort/chunks_to_b.c \
	Sorting_algorithms/Chunk_sort/get_chunks_size.c \
	Sorting_algorithms/Chunk_sort/look_for_max_position.c \
	Sorting_algorithms/Chunk_sort/push_max.c \
	Sorting_algorithms/Radix_sort/bit_set_sort.c \
	Sorting_algorithms/Radix_sort/max_bits.c \
	Sorting_algorithms/Radix_sort/still_bit_zero.c \
	Sorting_algorithms/Radix_sort/radix_sort.c \
	Sorting_algorithms/Selection_sort/look_for_min.c \
	Sorting_algorithms/Selection_sort/look_for_min_position.c \
	Sorting_algorithms/Selection_sort/push_all_to_b.c \
	Sorting_algorithms/Selection_sort/push_min.c \
	Sorting_algorithms/Selection_sort/return_all_to_a.c \
	Sorting_algorithms/Selection_sort/selection_sort.c \
	Sorting_algorithms/Utils/assign_index.c \
	Sorting_algorithms/Utils/get_minimum_node.c \
	Sorting_algorithms/Utils/look_for_max.c \
	Sorting_algorithms/Utils/push_all_largest_to_a.c \
	Sorting_algorithms/Utils/push_all_to_a.c \
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
	Utils/ft_putstr_stderr.c 
OBJDIR = Objects
VPATH = $(sort $(dir $(SRCS)))
OBJS = $(addprefix $(OBJDIR)/,$(notdir $(SRCS:.c=.o)))

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

.PHONY: all clean fclean re 
