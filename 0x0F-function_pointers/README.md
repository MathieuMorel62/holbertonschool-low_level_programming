# <p align=center>C - FUNCTION POINTERS</p>

<img src="https://i.ytimg.com/vi/cwvdT-4HT9o/maxresdefault.jpg" width="100%">

## Description
### Introduction to Function Pointers in C

In C, a function pointer is a pointer that points to a function. A function pointer can be used to call a function indirectly, which can be useful in certain situations, such as when you need to pass a function as an argument to another function, or when you need to store a function in an array or a structure.

### Declaring a Function Pointer

To declare a function pointer, you use the `*` operator to indicate that the variable is a pointer, and you use the function's return type and parameter list to indicate the type of the function that the pointer points to. For example, the following declares a function pointer named `pFunction` that points to a function that takes no parameters and returns `void`:

```c++
void (*pFunction)();
```

You can also use `typedef` to simplify the declaration of function pointer,

```c++
typedef void (*functionPointer)();
functionPointer pFunction;
```

### Assigning a Function to a Function Pointer

To assign a function to a function pointer, you use the address-of operator (`&`) to get the address of the function, and you assign it to the function pointer. For example, the following assigns the function named `myFunction` to the function pointer `pFunction`:

```c++
void myFunction() {
    printf("Hello, World!\n");
}
pFunction = &myFunction;
```

### Calling a Function through a Function Pointer

To call a function through a function pointer, you use the function pointer as if it were the function itself. For example, the following calls the function pointed to by `pFunction`:

```c++
(*pFunction)();
```

You can also use the indirection operator `*` to call the function,

```c++
*pFunction();
```

Function pointers are a powerful feature in C programming, they allow you to create more flexible and reusable code. With the understanding of function pointers, you can write more advanced and efficient C programs.

## Resources
### Read or Watch :

- [Function Pointer In C](https://www.geeksforgeeks.org/function-pointer-in-c/)
- [Pointers To Functions](https://publications.gbdirect.co.uk//c_book/chapter5/function_pointers.html)
- [Function Pointers In C / C++](https://www.youtube.com/watch?v=ynYtgGUNelE)
- [Why Pointers To Functions ?](https://www.youtube.com/watch?v=sxTFSDAZM8s)
- [Everything You Need To Know About Pointers In C](https://boredzo.org/pointers/)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [function_pointers.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/function_pointers.h)
- Don’t forget to push your header file
- All your header files should be include guarded

-----------------------------------

# TASKS

#### [0. What's my name](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/0-print_name.c)

Write a function that prints a name.

 - Prototype: `void print_name(char *name, void (*f)(char *));`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0e. Function pointers$ cat 0-main.c

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_as_is(char *name)
{
    printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - print a name in uppercase
 * @name: name of the person
 *
 * Return: Nothing.
 */
void print_name_uppercase(char *name)
{
    unsigned int i;

    printf("Hello, my uppercase name is ");
    i = 0;
    while (name[i])
    {
        if (name[i] >= 'a' && name[i] <= 'z')
        {
            putchar(name[i] + 'A' - 'a');
        }
        else
        {
            putchar(name[i]);
        }
        i++;
    }
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_name("Bob", print_name_as_is);
    print_name("Bob Dylan", print_name_uppercase);
    printf("\n");
    return (0);
}

mathieu@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
mathieu@ubuntu:~/0x0e. Function pointers$ ./a 
Hello, my name is Bob
Hello, my uppercase name is BOB DYLAN
```
</details>

-----------------------------

#### [1. If You Spend Too Much Time Thinking About a Thing, You'll Never Get It Done](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/1-array_iterator.c)

Write a function that executes a function given as a parameter on each element of an array.

 - Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
 - where `size` is the size of the array
 - And `action` is a pointer to the function you need to use

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0e. Function pointers$ cat 1-main.c

#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    array_iterator(array, 5, &print_elem);
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}

mathieu@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
mathieu@ubuntu:~/0x0e. Function pointers$ ./b 
0
98
402
1024
4096
0x0
0x62
0x192
0x400
0x1000
```
</details>

-----------------------------------

#### [2. To Hell With Circumstances; I Create Opportunities](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/2-int_index.c)

Write a function that searches for an integer.

 - Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
 - Where `size` is the number of elements in the array `array`
 - `cmp` is a pointer to the function to be used to compare values
 - `int_index` returns the index of the first element for which the `cmp` function does not return `0`
 - If no element matches, return `-1`
 - If size <= `0`, return `-1`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0e. Function pointers$ cat 2-main.c

#include <stdio.h>
#include "function_pointers.h"

/**
 * is_98 - check if a number is equal to 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - check if a number is greater than 0
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}


/**
 * abs_is_98 - check if the absolute value of a number is 98
 * @elem: the integer to check
 *
 * Return: 0 if false, something else otherwise.
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    index = int_index(array, 20, is_98);
    printf("%d\n", index);
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);
    return (0);
}

mathieu@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-int_index.c -o c
mathieu@ubuntu:~/0x0e. Function pointers$ ./c 
2
1
2
```
</details>

-----------------------------------

#### [3. A Goal Is Not Always Meant To Be Reached, It Often Serves Simply As Something To Aim At](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-main.c)

Write a program that performs simple operations.

 - You are allowed to use the standard library
 - Usage: `calc num1 operator num2`
 - You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
 - `operator` is one of the following:
   - `+`: addition
   - `-`: subtraction
   - `*`: multiplication
   - `/`: division
   - `%`: modulo
 - The program prints the result of the operation, followed by a new line
 - You can assume that the result of all operations can be stored in an `int`
 - if the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
 - if the `operator` is none of the above, print `Error`, followed by a new line, and exit with the status `99`
- if the user tries to divide (`/` or `%`) by 0, print `Error`, followed by a new line, and exit with the status `100`
- This task requires that you create four different files.

#### [3-calc.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-calc.h)

This file should contain all the function prototypes and data structures used by the program. You can use this structure:

```c++
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
```

#### [3-op_functions.c](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-op_functions.c)

This file should contain the 5 following functions (not more):

 - `op_add`: returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b);`
 - `op_sub`: returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b);`
 - `op_mul`: returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b);`
 - `op_div`: returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b);`
 - `op_mod`: returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b);`


#### [3-get_op_func.c](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-get_op_func.c)

This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

 - Prototype: `int (*get_op_func(char *s))(int, int);`
 - where s is the operator passed as argument to the program
 - This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+")` should return a pointer to the function `op_add`
 - You are not allowed to use `switch` statements
 - You are not allowed to use `for` or `do ... while` loops
 - You are not allowed to use `goto`
 - You are not allowed to use `else`
 - You are not allowed to use more than one `if` statement in your code
 - You are not allowed to use more than one `while` loop in your code
 - If s does not match any of the 5 expected operators (`+`, `-`, `*`, `/`, `%`), return `NULL`
 - You are only allowed to declare these two variables in this function:

```c++
    op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
```

#### [3-main.c](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/3-main.c)

This file should contain your `main` function only.

 - You are not allowed to code any other function than `main` in this file
 - You are not allowed to directly call `op_add`, `op_sub`, `op_mul`, `op_div` or `op_mod` from the `main` function
 - You have to use `atoi` to convert arguments to `int`
 - You are not allowed to use any kind of loop
 - You are allowed to use a maximum of 3 `if` statements

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-op_functions.c 3-get_op_func.c -o calc

mathieu@ubuntu:~/0x0e. Function pointers$ ./calc 1 + 1
2

mathieu@ubuntu:~/0x0e. Function pointers$ ./calc 97 + 1
98

mathieu@ubuntu:~/0x0e. Function pointers$ ./calc 1024 / 10
102

mathieu@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '*' 98
100352

mathieu@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '\*' 98
Error

mathieu@ubuntu:~/0x0e. Function pointers$ ./calc 1024 - 98
926

mathieu@ubuntu:~/0x0e. Function pointers$ ./calc 1024 '%' 98
44
```
</details>

----------------------------------

#### [4. Most Hackers Are Young Because Young People Tend To Be Adaptable. As Long As You Remain Adaptable, You Can Always Be a Good Hacker](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0F-function_pointers/100-main_opcodes.c)

Write a program that prints the [opcodes](https://en.wikipedia.org/wiki/Opcode) of its own main function.

 - Usage: `./main number_of_bytes`
 - Output format:
   - the opcodes should be printed in hexadecimal, lowercase
   - each opcode is two char long
   - listing ends with a new line
   - see example
 - You are allowed to use `printf` and `atoi`
 - You have to use `atoi` to convert the argument to an `int`
 - If the number of argument is not the correct one, print `Error`, followed by a new line, and exit with the status `1`
 - If the number of bytes is negative, print `Error`, followed by a new line, and exit with the status `2`
 - You do not have to compile with any flags

Note: if you want to translate your opcodes to assembly instructions, you can use, for instance [udcli](https://sourceforge.net/projects/udis86/).

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0e. Function pointers$ gcc -std=gnu89 100-main_opcodes.c -o main

mathieu@ubuntu:~/0x0e. Function pointers$ ./main 21
55 48 89 e5 48 83 ec 30 89 7d dc 48 89 75 d0 83 7d dc 02 74 14

mathieu@ubuntu:~/0x0e. Function pointers$ objdump -d -j.text -M intel main
[...]
00000000004005f6 <main>:
  4005f6:   55                      push   rbp
  4005f7:   48 89 e5                mov    rbp,rsp
  4005fa:   48 83 ec 30             sub    rsp,0x30
  4005fe:   89 7d dc                mov    DWORD PTR [rbp-0x24],edi
  400601:   48 89 75 d0             mov    QWORD PTR [rbp-0x30],rsi
  400605:   83 7d dc 02             cmp    DWORD PTR [rbp-0x24],0x2
  400609:   74 14                   je     40061f <main+0x29>
[...]

mathieu@ubuntu:~/0x0e. Function pointers$ ./main 21 | udcli -64 -x -o 4005f6
00000000004005f6 55               push rbp                
00000000004005f7 4889e5           mov rbp, rsp            
00000000004005fa 4883ec30         sub rsp, 0x30           
00000000004005fe 897ddc           mov [rbp-0x24], edi     
0000000000400601 488975d0         mov [rbp-0x30], rsi     
0000000000400605 837ddc02         cmp dword [rbp-0x24], 0x2
0000000000400609 7414             jz 0x40061f  
```
</details>

- Note 0: `je` is equivalent to `jz`
- Note 1: depending on how you write your `main` function, and on which machine you compile your program, the opcodes (and by extension the assembly code) might be different than the above example

--------------------------------------

## Author

- Mathieu Morel
