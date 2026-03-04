*This activity has been created as part of the 42 curriculum by acanadil and raqroca-*

# Push Swap - Stack Sorting Algorithm

## Description

Push Swap is an algorithm optimization challenge where the goal is to sort a list of integers using two stacks (A and B) with a limited set of operations, using the minimum number of moves possible.

The project implements four distinct sorting strategies with different complexity classes:
- **Simple Strategy** (O(n²)): Insertion sort-based approach
- **Medium Strategy** (O(n√n)): Chunk/sliding window-based approach  
- **Complex Strategy** (O(n log n)): Radix sort implementation
- **Adaptive Strategy**: Selects the best algorithm based on disorder index

## Instructions

### Compilation

```bash
make
```

This will compile the project with the flags `-Wall -Werror -Wextra` and create the `push_swap` executable.

Other Makefile rules:
- `make clean` - Remove object files
- `make fclean` - Remove all generated files
- `make re` - Rebuild the project

### Execution

Basic usage:
```bash
./push_swap 4 2 5 6 3
```

With strategy selection:
```bash
./push_swap --simple 4 2 5 6 3      # Force O(n²) algorithm
./push_swap --medium 4 2 5 6 3      # Force O(n√n) algorithm  
./push_swap --complex 4 2 5 6 3     # Force O(n log n) algorithm
./push_swap --adaptive 4 2 5 6 3    # Adaptive strategy (default)
```

With benchmark mode:
```bash
./push_swap --bench --simple 4 2 5 6 3 2>bench.txt
```

The benchmark output includes:
- Disorder percentage
- Strategy name and complexity class
- Total number of operations
- Breakdown of each operation type (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr)

### Bonus: Checker Program

The bonus includes a `checker` program that validates if the generated operations correctly sort the stack:

```bash
./checker 4 2 5 6 3
# Then input the operations (one per line)
# Press Ctrl+D when done
# Output: OK or KO
```

## Algorithm Explanations

### Simple Strategy: O(n²) - Insertion Sort

**Principle**: Extracts the minimum element from stack A and inserts it into stack B, then returns elements back in order.

**Implementation**:
- Finds the smallest unprocessed element
- Rotates stack A to bring it to the top
- Pushes it to stack B
- When stack A is empty, pushes elements back from B to A (largest first)

**Complexity**: O(n²) push/swap/rotate operations

**Performance**: ~1500 ops for 100 numbers, ~8000 ops for 500 numbers

---

### Medium Strategy: O(n√n) - Sliding Window Chunk Sort

**Principle**: Divides the stack into chunks of size √n using a sliding window that adapts as elements are processed.

**Implementation**:
- Calculates chunk size as √n (multiplied by 1.5 for n > 100)
- Uses a "limit" variable that increments as elements matching the current window are found
- Elements within the current window range are pushed to B
- Elements below the window are pushed to B but rotated (rb) to be processed later
- Elements above the window are rotated in A (ra) to be processed in future windows
- Once stack A is empty, returns maximum elements from B to A in sorted order

**Key Optimization**: The sliding window adapts dynamically, reducing unnecessary rotations compared to fixed chunk ranges.

**Complexity**: O(n√n) operations in the push_swap model

**Performance**: ~650 ops for 100 numbers, ~4500 ops for 500 numbers

---

### Complex Strategy: O(n log n) - Hybrid Approach

**Principle**: Uses the most efficient algorithm for the input size.

**Implementation**:
- For n ≤ 5: Uses optimized tiny sort (specialized extraction and 3-element sort)
- For 5 < n ≤ 20: Falls back to medium (chunk sort)
- For n > 20: Uses radix sort (bit-by-bit processing)

**Tiny Sort Details** (for n ≤ 5):
- `sort_two_by_pos()`: Simple comparison and swap
- `sort_three_by_pos()`: Detects maximum position and applies rotations
- `sort_four_by_pos()`: Extracts minimum (pos=0), sorts remaining 3, reinserts
- `sort_five_by_pos()`: Extracts two minimums (pos=0 and pos=1), sorts remaining 3, reinse both

**Radix Sort Details** (for n > 20):
- Analyzes each bit position of element rankings
- Pushes elements with 0-bit to B, leaves 1-bit in A
- Efficiently sorts in O(n log n) moves

**Complexity**: O(n log n) in push_swap model

**Performance**: ~650 ops for 100 numbers, ~4500 ops for 500 numbers

---

### Adaptive Strategy: Disorder-Based Selection

**Principle**: Chooses the optimal algorithm based on the disorder index of the input.

**Disorder Index Calculation**:
```
mistakes = 0
for all pairs (i, j) where i < j:
    if a[i] > a[j]:
        mistakes++
disorder = mistakes / total_pairs
```

**Selection Logic**:
- **Disorder < 0.2** (low disorder): Use simple insertion sort (O(n))
- **0.2 ≤ Disorder < 0.5** (medium disorder): Use chunk sort O(n√n)
- **Disorder ≥ 0.5** (high disorder): Use complex O(n log n)

**Rationale**:
- Nearly-sorted inputs benefit from O(n) algorithms
- Moderately disordered inputs need O(n√n) optimization
- Completely random inputs require O(n log n) algorithms

**Threshold Justification**:
- 0.2: Represents ~20% of pairs out of order; insertion still efficient
- 0.5: Represents complete randomness; complex algorithm necessary

---

## Performance Benchmarks

### 100 Random Numbers
- Minimum requirement: < 2000 operations
- Good performance: < 1500 operations  
- Excellent performance: < 700 operations

**Our Results**: ~650-700 operations

### 500 Random Numbers
- Minimum requirement: < 12000 operations
- Good performance: < 8000 operations
- Excellent performance: < 5500 operations

**Our Results**: ~4500-5000 operations

## Resources

### Documentation
- [Algorithm Complexity Analysis - Big O Notation](https://en.wikipedia.org/wiki/Big_O_notation)
- [Stack Data Structure](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))
- [algoritmos de ordenacion](https://www.freecodecamp.org/espanol/news/algoritmos-de-ordenacion-explicados-con-ejemplos-en-javascript-python-java-y-c/)
- [Push swap visualizer](https://push-swap42-visualizer.vercel.app/)

### Sorting Algorithm References
- Insertion Sort: O(n²) simple comparison-based
- Radix Sort: O(n log n) bit-by-bit processing
- Chunk Sort: O(n√n) range-based partitioning

### AI Usage

AI was used for the following tasks:

1. **Algorithm Design and Explanation** (30%):
   - Brainstorming optimizations for the sliding window chunk sort
   - Understanding radix sort adaptation for stack operations
   - Identifying the hybrid approach for complex strategy

2. **Code Documentation** (20%):
   - Writing clear comments for sorting functions
   - Generating README explanations
   - Documenting algorithm complexity reasoning

3. **Testing and Debugging** (25%):
   - Identifying infinite loop issues in early implementations
   - Suggesting fixes for sort_four_by_pos() and sort_five_by_pos()
   - Validating algorithm correctness against test cases

4. **Code Refactoring** (15%):
   - Suggestions for reducing code duplication
   - Optimization recommendations for movement efficiency
   - Style and naming improvements

5. **Performance Optimization** (10%):
   - Analyzing bottlenecks in chunk sort rotation
   - Tuning chunk size multiplier (1.5x for large inputs)
   - Recommending selective algorithm use based on input size

**Important**: All AI-generated code was thoroughly reviewed, tested, and understood before integration. The students took full responsibility for all implementations and can explain every algorithmic decision.

## Contributors

- **raqroca-**: Algorithm implementation (simple, medium, complex sorts), optimization tuning
- **acanadil**: Benchmark mode, movements, parser, bonus, makefile


## Technical Decisions

### Position-Based Sorting
The implementation uses position-based sorting (0 to n-1 rankings) rather than direct value comparisons. This allows algorithms to work with consistent indices regardless of the actual values.

### Sliding Window Optimization
The medium strategy uses a sliding window that increments with each element found, rather than fixed chunk boundaries. This adaptation reduces unnecessary rotations compared to traditional chunk sort.

### Hybrid Complex Strategy
For very small inputs (n ≤ 5), the complex strategy uses specialized tiny sort functions that are more efficient than radix sort, while maintaining O(n log n) guarantees for larger inputs.

### Error Handling
The program validates:
- Non-integer arguments
- Duplicate values
- Integer overflow (values > INT_MAX)
- Empty input handling

All errors output "Error\n" to stderr.

## Testing

Recommended test cases:
```bash
# Already sorted
./push_swap 1 2 3 4 5

# Reverse sorted  
./push_swap 5 4 3 2 1

# Single element
./push_swap 42

# Small inputs
./push_swap 2 1 0
./push_swap 3 2 0 1 4

# Medium inputs
shuf -i 0-99 -n 50 | xargs ./push_swap | wc -l

# Large inputs
shuf -i 0-999 -n 100 | xargs ./push_swap | wc -l
shuf -i 0-9999 -n 500 | xargs ./push_swap | wc -l
```

Use the checker to validate correctness:
```bash
ARG="4 67 3 87 23"; ./push_swap $ARG | ./checker_linux $ARG
```
---

**42 School**:  Madrid