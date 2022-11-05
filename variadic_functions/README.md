# C - VARIADIC FUNCTIONS

![img](https://miro.medium.com/max/1400/1*aC11spxGQlpAxviBOQo-8A.png)

## RESOURCES

### Read or watch : 

- [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)

- [Variadic Functions](https://intranet.hbtn.io/rltoken/PY9dOZHn7a5M9suR-0j1yQ)

- [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)

--------------------------------

# TASKS

### [0. Beauty Is Variable, Ugliness Is Constant](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/variadic_functions/0-sum_them_all.c)

Write a function that returns the sum of all its parameters.

 - Prototype: int sum_them_all(const unsigned int n, ...);
 - If n == 0, return 0

---------------------------------

### [1. To Be Is To Be The Value Of a Variable](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/variadic_functions/1-print_numbers.c)

Write a function that prints numbers, followed by a new line.

 - Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
 - Where separator is the string to be printed between numbers
 - And n is the number of integers passed to the function
 - You are allowed to use printf
 - If separator is NULL, don’t print it
 - Print a new line at the end of your function

---------------------------------

### [2. One Woman's Constant Is Another Woman's Variable](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/variadic_functions/2-print_strings.c)

Write a function that prints strings, followed by a new line.

 - Prototype: void print_strings(const char *separator, const unsigned int n, ...);
 - Where separator is the string to be printed between the strings
 - And n is the number of strings passed to the function
 - You are allowed to use printf
 - If separator is NULL, don’t print it
 - If one of the string is NULL, print (nil) instead
 - Print a new line at the end of your function

-----------------------------

### [3. To Be Is a To Be The Value Of a Variable](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/variadic_functions/3-print_all.c)

Write a function that prints anything.

 - Prototype: void print_all(const char * const format, ...);
 - Where format is a list of types of arguments passed to the function
   - c: char
   - i: integer
   - f: float
   - s: char * (if the string is NULL, print (nil) instead
   - any other char should be ignored
 - You are not allowed to use for, goto, ternary operator, else, do ... while
 - You can use a maximum of
   - 2 while loops
   - 2 if
 - You can declare a maximum of 9 variables
 - You are allowed to use printf
 - Print a new line at the end of your function

------------------------

### [4. Real Programmers Can Write Assembly Code In Any Language]()

Write a 64-bit program in assembly that prints Hello, World, followed by a new line.

 - You are only allowed to use the system call write (use int or syscall, not a call)
 - Your program will be compiled using nasm and gcc (as follows)

-------------------------------
