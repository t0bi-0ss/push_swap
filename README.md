*This project has been created as part of 42 curriculum by tsordo-o, ilbozhek.*

## Description

`Push_swap` is a CLI tool that sorts a stack of integers using only allowed stack operations. The program reads its input from command-line arguments, selects the best sorting strategy, and prints the sequence of operations required to sort the stack.

## Objective

The goal of this project is to implement a valid `push_swap` solver that sorts any valid input stack using the restricted operations set, supports strategy selection, and optionally prints benchmark information.

## Instructions

### Requirements

- `make`
- A `C` compiler

### Installation

Clone the repository and run:

```
make all
```

This will:

1. Create the `Objects/` directory.
2. Compile every `.c` source file into `.o` object files stored in `Objects/`.
3. Link the objects into the executable `push_swap`.

Available make commands:

```
make clean
```

- Remove all object files from `Objects/` and the project root.

```
make fclean
```

- Run `make clean` and also remove the `push_swap` executable.

```
make re
```

- Run `make fclean` and rebuild the project from scratch.

### Usage

Run the program as:

```
./push_swap <flags> <stack> <flags>
```

Example:

```
shuf -i 0-9999 -n 100 > args.txt
./push_swap --bench $(cat args.txt)
```

Supported flags:

- `--simple` : force selection sort
- `--medium` : force chunk sort
- `--complex` : force radix sort
- `--adaptive` : select the strategy automatically based on input disorder
- `--bench` : print benchmark information after sorting

## Notes

### Algorithm justification

This project implements three sorting strategies and an adaptive selection mechanism. The chosen algorithm is determined in `Sorting_algorithms/algorithm_selection.c`.

### Adaptive strategy and disorder

When no explicit strategy flag is provided, the program enables adaptive mode. It computes a disorder score for the input stack in `Stacks/calculate_disorder.c`, comparing each element to later values and normalizing the result into a value between `0` and `1`.

The algorithm selection thresholds are:

- `selection_sort` when disorder < `0.2`
- `chunk_sort` when `0.2 <= disorder < 0.5`
- `radix_sort` when disorder >= `0.5`

This approach lets the program choose the most appropriate strategy based on how unsorted the input is.

### Selection sort

Implemented in `Sorting_algorithms/Selection_sort/selection_sort.c`.

How it works:

- Push the smallest values from stack A to stack B.
- Then push values back to stack A in sorted order.

Justification:

- Best for nearly sorted inputs or small stacks.
- Minimizes stack operations when disorder is low.
- Works well when only a few values are out of order.

### Chunk sort

Implemented in `Sorting_algorithms/Chunk_sort/chunk_sort.c`.

How it works:

- Divide the input into smaller chunks.
- Push chunks from stack A to stack B.
- Reconstruct the sorted stack by moving the largest values back to stack A.

Justification:

- Best for medium-disorder inputs.
- Reduces operations compared to a simple selection approach by moving groups of values.
- Balances complexity and efficiency for moderately unsorted data.

### Radix sort

Implemented in `Sorting_algorithms/Radix_sort/radix_sort.c`.

How it works:

- Assign a normalized index to each value in stack A.
- Sort by examining one binary digit at a time.
- Move values between stacks A and B based on each bit until the stack is sorted.

Justification:

- Best for large or highly disordered inputs.
- Provides a predictable, scalable sorting method using only allowed stack operations.
- Efficiently handles random inputs by leveraging binary indexing.

### Why these algorithms were selected

The `push_swap` project requires sorting with a limited set of stack operations while keeping operation counts low. These strategies were chosen because they cover a wide range of input characteristics:

- `selection_sort` for low-disorder inputs.
- `chunk_sort` for medium-disorder inputs.
- `radix_sort` for high-disorder or large inputs.
- Adaptive mode to automatically choose the best method based on input distribution.

---

## Contributions

- **ilbozhek**: implemented `flags_compare.c`, `print_bench.c`, and the flag handling logic in `Command_line/list_from_argv.c`.
- **tsordo-o**: implemented all remaining project logic, including sorting algorithms, stack/list utilities, operations, and CLI integration.

## Resources

*The following resources were used to successfully complete this project.*

- 42's push_swap <a href="https://cdn.intra.42.fr/pdf/pdf/204024/en.subject.pdf">subject.pdf</a>
- Claude AI: Used to understand sorting algorithm concepts.
- Geeks for Geeks: <a href="https://www.geeksforgeeks.org/dsa/selection-sort-algorithm-2/">Selection Sort</a>
- Geeks for Geeks: <a href="https://www.geeksforgeeks.org/dsa/radix-sort/">Radix Sort</a>
