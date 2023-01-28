# C - PREPROCESSOR

<img src="https://grandidierite.github.io/assets/img/directive.jpg" width="100%">

## Description
### Introduction to the C Preprocessor

The C preprocessor is a program that processes source code before it is passed to the compiler. It performs a number of tasks, including the inclusion of header files, macro expansion, and conditional compilation.

### Header Files

The C preprocessor allows you to include header files in your source code, using the `#include` directive. A header file is a file that contains declarations for functions, variables, and other constructs that can be used in your program. For example, the following line includes the standard input/output header file, `stdio.h`, which contains declarations for the `printf` and `scanf` functions:

```c
#include <stdio.h>
```

### Macros

The C preprocessor also provides a way to define macros, which are short for "macro definitions". A macro is a fragment of code that is given a name and can be reused throughout your program. Macros are defined using the `#define` directive, and are invoked by replacing the macro name with its definition. For example, the following defines a macro named `MAX` with the value `100`:

```c
#define MAX 100
```

### Conditional Condition

The C preprocessor also provides a way to include or exclude parts of your source code based on conditions, using the `#if`, `#ifdef`, `#ifndef`, `#else`, and `#endif` directives. This is known as conditional compilation.  
  
For example, the following code will only be compiled if the macro `DEBUG` is defined:

```c
#ifdef DEBUG
    printf("Debugging is on\n");
#endif
```

The preprocessor also provides the `#else` and `#elif` directives, which can be used to include or exclude parts of your source code based on different conditions.

```c
#ifdef DEBUG
    printf("Debugging is on\n");
#else
    printf("Debugging is off\n");
#endif
```

The C preprocessor is a powerful tool that can be used to make your code more readable, maintainable, and portable. By understanding the concepts of header files, macros, and conditional compilation, you can start using the C preprocessor to improve your own C programs.

## Resources
### Read or watch : 

- [Understanding C Program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Object-Like Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros)
- [Macro Arguments](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments)
- [Pre Processor Directives In C](https://www.youtube.com/watch?v=X6HiYbY3Uak)
- [The C Preprocessor](https://www.cprogramming.com/tutorial/cpreprocessor.html)
- [Standard Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros)
- [Include Guard](https://en.wikipedia.org/wiki/Include_guard)
- [Common Predefined Macros](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- Don’t forget to push your header file
- All your header files should be include guarded

--------------------------------

# TASKS

#### [0. Object_Like Macro](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/0-object_like_macro.h)

Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0c. macro, structures$ cat 0-main.c

#include "0-object_like_macro.h"
#include "0-object_like_macro.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = 98 + SIZE;
    printf("%d\n", s);
    return (0);
}

mathieu@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
mathieu@ubuntu:~/0x0c. macro, structures$ ./a 
1122
```
</details>

-----------------------------------

#### [1. Pi](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/1-pi.h)

Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0c. macro, structures$ cat 1-main.c

#include "1-pi.h"
#include "1-pi.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    float a;
    float r;

    r = 98;
    a = PI * r * r;
    printf("%.3f\n", a);
    return (0);
}

mathieu@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
mathieu@ubuntu:~/0x0c. macro, structures$ ./b
30171.855
```
</details>

------------------------------------

#### [2. File Name](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/2-main.c)

Write a program that prints the name of the file it was compiled from, followed by a new line.

 - You are allowed to use the standard library

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
mathieu@ubuntu:~/0x0c. macro, structures$ ./c 
2-main.c
mathieu@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
mathieu@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
mathieu@ubuntu:~/0x0c. macro, structures$ ./cc
02-main.c
```
</details>

-----------------------------

#### [3. Function-Like Macro](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/3-function_like_macro.h)

Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0c. macro, structures$ cat 3-main.c

#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i;
    int j;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    printf("%d, %d\n", i, j);
    return (0);
}

mathieu@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
mathieu@ubuntu:~/0x0c. macro, structures$ ./d 
980, 980
```
</details>

-----------------------------------

#### [4. Sum](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0D-preprocessor/4-sum.h)

Write a function-like macro `SUM(x, y)` that computes the sum of the numbers `x` and `y`.

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0c. macro, structures$ cat 4-main.c

#include <stdio.h>
#include "4-sum.h"
#include "4-sum.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int s;

    s = SUM(98, 1024);
    printf("%d\n", s);
    return (0);
}

mathieu@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
mathieu@ubuntu:~/0x0c. macro, structures$ ./e 
1122
```
</details>

-----------------------------

## Author

- Mathieu Morel
