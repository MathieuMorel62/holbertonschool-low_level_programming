# C - VARIADIC FUNCTIONS

<img src="https://miro.medium.com/max/1400/1*aC11spxGQlpAxviBOQo-8A.png" width="100%">

## Description
### Variadic Functions in C

In C, a variadic function is a function that can take a variable number of arguments. These types of functions are denoted by an ellipsis (`...`) in the function prototype.  
   
For example, the `printf()` function is a variadic function that takes a variable number of arguments. The first argument is a format string, and the remaining arguments are values to be inserted into the format string.

```c
#include <stdio.h>

int main() {
    printf("Hello, %s!\n", "world");
    return 0;
}
```

In this example, the format string is `"Hello, %s!\n"` and the value to be inserted is `"world". The printf()` function uses the format string to determine how to format the remaining arguments.  
   
To access the variable number of arguments in a variadic function, C provides the `va_list`, `va_start`, `va_arg`, and `va_end` macros.

```c
#include <stdarg.h>

void print_numbers(int count, ...) {
    va_list args;
    va_start(args, count);

    for (int i = 0; i < count; i++) {
        int number = va_arg(args, int);
        printf("%d ", number);
    }

    va_end(args);
}

int main() {
    print_numbers(3, 1, 2, 3);
    return 0;
}
```

In this example, `print_numbers` is a variadic function that takes an integer `count` followed by `count` number of integers. The `va_list` type is used to hold the variable argument list. The `va_start` macro is used to initialize the `va_list` to the first argument following count. The `va_arg` macro is used to access each argument in the list, and the `va_end` macro is used to clean up the memory used by the `va_list`.  
  
It is important to keep in mind that, Variadic functions can be a powerful tool, but they can also make your code more complex and harder to understand. Use them with caution.

## Resources
### Read or Watch : 

- [stdarg.h](https://en.wikipedia.org/wiki/Stdarg.h)
- [Variadic Functions](https://intranet.hbtn.io/rltoken/PY9dOZHn7a5M9suR-0j1yQ)
- [Const Keyword](https://www.youtube.com/watch?v=1W4oyuOdXv8)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are`malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use the following macros: `va_start`, `va_arg` and `va_end`
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [variadic_functions.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/variadic_functions.h)
- Don’t forget to push your header file
- All your header files should be include guarded

--------------------------------

# TASKS

#### [0. Beauty Is Variable, Ugliness Is Constant](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/0-sum_them_all.c)

Write a function that returns the sum of all its parameters.

 - Prototype: `int sum_them_all(const unsigned int n, ...);`
 - If `n == 0`, return `0`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0f. variadic functions$ cat 0-main.c

#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}

mathieu@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
mathieu@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
```
</details>

---------------------------------

#### [1. To Be Is To Be The Value Of a Variable](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/1-print_numbers.c)

Write a function that prints numbers, followed by a new line.

 - Prototype: `void print_numbers(const char *separator, const unsigned int n, ...);`
 - Where `separator` is the string to be printed between numbers
 - And `n` is the number of integers passed to the function
 - You are allowed to use `printf`
 - If `separator` is `NULL`, don’t print it
 - Print a new line at the end of your function

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0f. variadic functions$ cat 1-main.c

#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}

mathieu@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
mathieu@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
```
</details>

---------------------------------

#### [2. One Woman's Constant Is Another Woman's Variable](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/2-print_strings.c)

Write a function that prints strings, followed by a new line.

 - Prototype: `void print_strings(const char *separator, const unsigned int n, ...);`
 - Where `separator` is the string to be printed between the strings
 - And `n` is the number of strings passed to the function
 - You are allowed to use `printf`
 - If separator is NULL, don’t print it
 - If one of the string is NULL, print `(nil)` instead
 - Print a new line at the end of your function

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0f. Variadic functions$ cat 2-main.c

#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    return (0);
}

mathieu@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_strings.c -o c
mathieu@ubuntu:~/0x0f. Variadic functions$ ./c 
Jay, Django
```
</details>

-----------------------------

#### [3. To Be Is a To Be The Value Of a Variable](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/3-print_all.c)

Write a function that prints anything.

 - Prototype: `void print_all(const char * const format, ...);`
 - Where `format` is a list of types of arguments passed to the function
   - `c`: `char`
   - `i`: `integer`
   - `f`: `float`
   - `s`: `char *` (if the string is NULL, print `(nil)` instead
   - any other char should be ignored
 - You are not allowed to use `for`, `goto`, ternary operator, `else`, `do ... while`
 - You can use a maximum of
   - 2 `while` loops
   - 2 `if`
 - You can declare a maximum of `9` variables
 - You are allowed to use `printf`
 - Print a new line at the end of your function

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0f. Variadic functions$ cat 3-main.c

#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_all("ceis", 'B', 3, "stSchool");
    return (0);
}

mathieu@ubuntu:~/0x0f. Variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-print_all.c -o d
mathieu@ubuntu:~/0x0f. Variadic functions$ ./d 
B, 3, stSchool
```
</details>

------------------------

#### [4. Real Programmers Can Write Assembly Code In Any Language](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x10-variadic_functions/100-hello_world.asm)

Write a 64-bit program in assembly that prints `Hello, World`, followed by a new line.

 - You are only allowed to use the system call `write` (use `int` or `syscall`, not a call)
 - Your program will be compiled using `nasm` and `gcc` (as follows)

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0f. Variadic functions$ nasm -f elf64 100-hello_world.asm && gcc -no-pie -std=gnu89 100-hello_world.o -o hello

mathieu@ubuntu:~/0x0f. Variadic functions$ ./hello 
Hello, World
```
</details>

-------------------------------

## Author

- Mathieu Morel
