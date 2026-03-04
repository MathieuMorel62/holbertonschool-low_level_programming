### Debugging Visualization with Python Tutor

This directory contains a series of small exercises to learn how to **debug C code** by visualizing step‑by‑step execution with **Python Tutor**.

The main goals are to practice how to:
- **Track variable changes** in simple and nested loops.
- **Understand scope** and the role of each variable.
- **Spot logical errors** (not compilation errors).
- **Fix** those errors to produce the expected result.

---

### Prerequisites

- Basic knowledge of **C** (variables, functions, `for` loops).
- Ability to compile and run a simple C program with `gcc`.
- Access to **Python Tutor** (C mode): search for "Python Tutor C" in your browser.

---

### Project files

- **`sum_to_n.c`**  
  - Goal: debug a function that should compute the **sum from 1 to n**.  
  - Key points:
    - Track variables `i` and `sum` in a simple loop.
    - Check that the loop visits **all** intended values.
    - Make sure the function **returns the correct variable** (the sum, not just `n`).
  - Expected result for `sum_to_n(10)`: **55**.

- **`multiplication_table.c`**  
  - Goal: understand and fix a bug in **nested loops** that generate a multiplication table.  
  - Key points:
    - Observe how `row` and `col` change.
    - Identify why some products are **skipped** (extra increment, wrong condition, etc.).
    - Correct the logic so that **all** products are printed.  
  - Expected result for `print_table(4)`:
    - `1 2 3 4`  
    - `2 4 6 8`  
    - `3 6 9 12`  
    - `4 8 12 16`

- **`row_sums.c`**  
  - Goal: analyze how functions work together and how **accumulator variables** (`current`, `total`) should be used.  
  - Key points:
    - Understand what `row_sum(row, cols)` computes.
    - Step through `total_sum(rows, cols)` to see how `current` and `total` change.
    - Decide whether variables are reset or accumulated in the right place.  
  - Expected result for `total_sum(3, 3)`: **36**.

---

### How to use Python Tutor with these exercises

1. **Open the C file** you want (`sum_to_n.c`, `multiplication_table.c`, or `row_sums.c`).
2. **Copy the entire code** (including `main`).
3. Go to the **Python Tutor** website (C version) and paste the code.
4. Run the program **step by step**:
   - Watch the values of variables (especially loop counters and sums).
   - Check whether loop conditions and `return` statements match the intended algorithm.
5. Go back to your editor, **fix the logic**, then:
   - Recompile and run locally.
   - Confirm that the output matches the **Expected Outcome** given in the exercise.

---

### Debugging best practices for this project

- **Always predict before running**: before executing the program, write down what you expect to see.
- **Compare expected vs. actual behavior**: the difference usually points to the bug.
- **Focus on critical variables**: loop counters, sums, products.
- **Change the logic, not `main`**: in these exercises, `main` is fixed to validate your code.

This directory is good practice to learn how to read, understand, and fix C code while using Python Tutor as a "magnifying glass" on your program’s execution.

