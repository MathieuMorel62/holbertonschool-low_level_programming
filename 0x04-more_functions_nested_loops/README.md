# C - MORE FUNCTIONS, MORE NESTED LOOPS

<img src="https://c8.alamy.com/comp/2G18XE3/abstract-modern-tech-of-programming-code-screen-developer-c-programming-language-of-computer-script-and-technology-background-of-software-2G18XE3.jpg" width="100%">

## Description
### Using Functions and Nested Loops in C

Functions and nested loops are important tools for programming in C. Functions allow for breaking down a program into smaller and more manageable parts, while nested loops allow for efficiently processing data.

```c
#include <stdio.h>

int add(int x, int y) {
    return x + y;
}

int main() {
    int a = 5, b = 7;
    int result = add(a, b);
    printf("The result of %d + %d is %d\n", a, b, result);
    
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("The value of i is %d and the value of j is %d\n", i, j);
        }
    }
    return 0;
}
```

The above code shows an example of using functions in C. The `add` function takes two parameters, `x` and `y`, both of type integer, and returns their sum. The function is then used in the `main` function to add `a` and `b` and print the result.  
  
The code also shows an example of using nested loops in C. The nested `for` loops are used to print the values of `i` and `j` for all numbers from 0 to 3.  
  
By combining functions and nested loops, it is possible to create more complex programs that are still easy to understand and maintain. It is therefore important to understand how to effectively use these programming tools in C.

## Resources
### Read or Watch :

- [Nested While Loops](https://intranet.hbtn.io/rltoken/lnzT56HYlUClB0-yDfwiqw)
- [C - Functions](https://intranet.hbtn.io/rltoken/mWFYXPYiI87lYf6tyYtD_Q)
- [Learning To Program In C (Part 06)](https://intranet.hbtn.io/rltoken/xpQGxUCqMewY3qcbTU3NTw)
- [What Is The Purpose Of A Function Prototype ?](https://intranet.hbtn.io/rltoken/7P08UbWvbOnyohRhLjSKGw)
- [C - Header Files](https://intranet.hbtn.io/rltoken/gnZvo3oRJ5CR_LsKz8tzVA)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [main.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/main.h)
- Don’t forget to push your header file

--------------------------------

# TASKS

#### [0. Isupper](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/0-isupper.c)

Write a function that checks for uppercase character.

  - Prototype: `int _isupper(int c)`;
  - Returns `1` if `c` is uppercase
  - Returns `0` otherwise

FYI: The standard library provides a similar function: `isupper`. Run `man isupper` to learn more.

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 0-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
  
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-isupper.c -o 0-isuper
mathieu@ubuntu:~/$ ./0-isuper 
A: 1
a: 0
```
</details>

---------------------------------

#### [1. Isdigit](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/1-isdigit.c)

Write a function that checks for a digit (`0` through `9`).

  - Prototype: `int _isdigit(int c)`;
  - Returns `1` if `c` is a digit
  - Returns `0` otherwise

FYI: The standard library provides a similar function: isdigit. Run man isdigit to learn more.

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 1-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = '0';
    printf("%c: %d\n", c, _isdigit(c));
    c = 'a';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
  
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-isdigit.c -o 1-isdigit
mathieu@ubuntu:~/$ ./1-isdigit 
0: 1
a: 0
```
</details>

------------------------------

#### [2. Collaboration Is Multiplication](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/2-mul.c)

Write a function that multiplies two integers.
 
  - Prototype: `int mul(int a, int b)`;

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 2-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("%d\n", mul(98, 1024));
    printf("%d\n", mul(-402, 4096));
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-mul.c -o 2-mul
mathieu@ubuntu:~/$ ./2-mul 
100352
-1646592
```
</details>

---------------------------

#### [3. The Numbers Speak For Themelves](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/3-print_numbers.c)

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

  - Prototype: `void print_numbers(void)`;
  - You can only use `_putchar` twice in your code

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 3-main.c 
  
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers();
    return (0);
}
  
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-print_numbers.c -o 3-print_numbers
mathieu@ubuntu:~/$ ./3-print_numbers | cat -e
0123456789$
```
</details>

-------------------------------

#### [4. I Believe In Numbers And Signs](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/4-print_most_numbers.c)

Write a function that prints the numbers, from `0` to `9`, followed by a new line.

  - Prototype: `void print_most_numbers(void)`; 
  - Do not print `2` and `4`
  - You can only use `_putchar` twice in your code

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 4-main.c
  
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_most_numbers();
    return (0);
}
  
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_most_numbers.c -o 4-print_most_numbers
mathieu@ubuntu:~/$ ./4-print_most_numbers 
01356789
```
</details>

----------------------

#### [5. Numbers Constitute The Only Universal Language](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/5-more_numbers.c)

Write a function that prints 10 times the numbers, from `0` to `14`, followed by a new line.

  - Prototype: `void more_numbers(void)`;
  - You can only use `_putchar` three times in your code

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 5-main.c
  
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    more_numbers();
    return (0);
}
  
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-more_numbers.c -o 5-more_numbers
mathieu@ubuntu:~/$ ./5-more_numbers 
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
01234567891011121314
```
</details>

----------------------------

#### [6. The Shortest Distance Between Two Points Is a Straight Line](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/6-print_line.c)

Write a function that draws a straight line in the terminal.

  - Prototype: `void print_line(int n)`;
  - You can only use `_putchar` function to print 
  - Where `n` is the number of times the character `_` should be printed
  - The line should end with a `\n`
  - If `n` is `0` or less, the function should only print `\n`

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 6-main.c
  
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
  
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-print_line.c -o 6-lines
mathieu@ubuntu:~/$ ./6-lines | cat -e
$
__$
__________$
$
```
</details>

---------------------------

#### [7. I Feel Like I Am Diagonally Parked In a Parallel Universe](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/7-print_diagonal.c)

Write a function that draws a diagonal line on the terminal.

  - Prototype: `void print_diagonal(int n)`;
  - You can only use `_putchar` function to print
  - Where `n` is the number of times the character `\` should be printed
  - The diagonal should end with a `\n`
  - If `n` is `0` or less, the function should only print a `\n`

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 7-main.c
  
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
  
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_diagonal.c -o 7-diagonals
mathieu@ubuntu:~/$ ./7-diagonals | cat -e
$
\$
 \$
\$
 \$
  \$
   \$
    \$
     \$
      \$
       \$
        \$
         \$
$
```
</details>

----------------------------

#### [8. You Are So Much Sunshine In Every Square Inch](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/8-print_square.c)

Write a function that prints a square, followed by a new line.

  - Prototype: `void print_square(int size)`;
  - You can only use `_putchar` function to print
  - Where size is the `size` of the square
  - If `size` is `0` or less, the function should print only a new line
  - Use the character `#` to print the square

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 8-main.c 
  
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_square(2);
    print_square(10);
    print_square(0);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-print_square.c -o 8-squares
mathieu@ubuntu:~/$ ./8-squares 
##
##
##########
##########
##########
##########
##########
##########
##########
##########
##########
##########

mathieu@ubuntu:~/$ 
```
</details>

-----------------------------

#### [9. Fizz - Buzz](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/9-fizz_buzz.c)

The “Fizz-Buzz test” is an interview question designed to help filter out the 99.5% of programming job candidates who can’t seem to program their way out of a wet paper bag.

Write a program that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print `Fizz` instead of the number and for the multiples of five print `Buzz`. For numbers which are multiples of both three and five print `FizzBuzz`.

  - Each number or word should be separated by a space
  - You are allowed to use the standard library

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-fizz_buzz.c -o 9-fizz_buzz
mathieu@ubuntu:~/$ ./9-fizz_buzz 
1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz 16 17 Fizz 19 Buzz Fizz 22 23 Fizz Buzz 26 Fizz 28 29 FizzBuzz 31 32 Fizz 34 Buzz Fizz 37 38 Fizz Buzz 41 Fizz 43 44 FizzBuzz 46 47 Fizz 49 Buzz Fizz 52 53 Fizz Buzz 56 Fizz 58 59 FizzBuzz 61 62 Fizz 64 Buzz Fizz 67 68 Fizz Buzz 71 Fizz 73 74 FizzBuzz 76 77 Fizz 79 Buzz Fizz 82 83 Fizz Buzz 86 Fizz 88 89 FizzBuzz 91 92 Fizz 94 Buzz Fizz 97 98 Fizz Buzz
```
</details>

-----------------------------------

#### [10. Triangles](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/10-print_triangle.c)

Write a function that prints a triangle, followed by a new line.

  - Prototype: `void print_triangle(int size)`;
  - You can only use `_putchar` function to print
  - Where `size` is the size of the triangle
  - If `size` is `0` or less, the function should print only a new line
  - Use the character `#` to print the triangle

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 10-main.c 
  
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}
  
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-print_triangle.c -o 10-triangles
mathieu@ubuntu:~/$ ./10-triangles 
 #
##
         #
        ##
       ###
      ####
     #####
    ######
   #######
  ########
 #########
##########
#

mathieu@ubuntu:~/$ ./10-triangles | tr ' ' . | cat -e
.#$
##$
.........#$
........##$
.......###$
......####$
.....#####$
....######$
...#######$
..########$
.#########$
##########$
#$
$
```
</details>

---------------------------------------------

#### [11. The Problem Of Distinguishing Prime Numbers From Composite Numbers And Of Resolving The Latter Into Their Prime Factors Is Known To Be One Of The Most Important And Useful In Arithmetic](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/100-prime_factor.c)

The prime factors of `1231952` are `2`, `2`, `2`, `2`, `37` and `2081`.

Write a program that finds and prints the largest prime factor of the number `612852475143`, followed by a new line.

- You are allowed to use the standard library
- Your program will be compiled with this command: `gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-prime_factor.c -o 100-prime_factor -lm`

---------------------------

#### [12. Numbers Have Life; They're Not Just Symbols On Paper](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x04-more_functions_nested_loops/101-print_number.c)

Write a function that prints an integer.

- Prototype: `void print_number(int n)`;
- You can only use `_putchar` function to print
- You are not allowed to use `long`
- You are not allowed to use arrays or pointers
- You are not allowed to hard-code special values

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 101-main.c
  
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_number(98);
    _putchar('\n');
    print_number(402);
    _putchar('\n');
    print_number(1024);
    _putchar('\n');
    print_number(0);
    _putchar('\n');
    print_number(-98);
    _putchar('\n');
    return (0);
}
  
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
mathieu@ubuntu:~/$ ./101-print_numbers 
98
402
1024
0
-98
```
</details>

-------------------------

## AUTHOR

- Mathieu Morel
