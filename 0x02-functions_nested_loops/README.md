# <p align=center>C - FUNCTIONS, NESTED LOOPS</p>

<img src="https://d1m75rqqgidzqn.cloudfront.net/wp-data/2020/12/15114057/shutterstock_487518850-1.jpg" width="100%">

## Description
### C Functions

C functions allow grouping of instructions into a reusable block, which can be called from multiple places in the code. Functions can also take parameters and return a value.  

Here's an example of a C function declaration:

```c++
int add(int a, int b) {
    return a + b;
}
```

This function takes in two integers `a` and `b`, and returns their sum. It can be called from other parts of the code like this:  

```c++
int result = add(2, 3);
``` 

### Nested Loops

Nested loops, on the other hand, allow repeating a series of instructions at multiple levels of depth. For example, a `for` loop inside another `for` loop allows iterating through all possible combinations of the two sets of iteration.  
  
Here's an example of nested loops in C:

```c++
for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 5; j++) {
        printf("The value of i is %d and the value of j is %d\n", i, j);
    }
}
```

This code will print the values of `i` and `j` for all possible combinations between 0 and 9 for `i` and between 0 and 4 for `j`.

## RESOURCES
### Read or watch :

- [Nested While Loops](https://intranet.hbtn.io/rltoken/XR1FqLCngwWdV5-sOcTkYA)
- [C - Functions](https://intranet.hbtn.io/rltoken/y0tuBpspBgJ8E2STVqEPQQ)
- [Learning To Program In C (Part 06)](https://intranet.hbtn.io/rltoken/znVekiyJaZQ12d15MhS8fQ)
- [What Is A Function Prototype](https://intranet.hbtn.io/rltoken/5LM45CAPlfwlu5Q3eCctAg)
- [What Is The Purpose Of A Function Prototype ?](https://intranet.hbtn.io/rltoken/SuqVH2cku18AiywqUIrgVA)
- [C - Header Files](https://intranet.hbtn.io/rltoken/erpTD0m97ydWAVtyyGkbRA)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [main.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/main.h)
- Don’t forget to push your header file

------------------------------

# TASKS

#### [0. _Putchar:](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/0-putchar.c)

Write a program that prints `_putchar`, followed by a new line.

  - The program should return `0`

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$  gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-putchar.c -o 0-putchar
mathieu@ubuntu:~/$ ./0-putchar 

_putchar 
```
</details>

-----------------------

#### [1. I Sometimes Suffer From Insomnia. And When I Can't Fall Asleep, I Play What I Call The Alphabet Game](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/1-alphabet.c)

Write a function that prints the alphabet, in lowercase, followed by a new line.
 
  - Prototype: `void print_alphabet(void);`
  - You can only use `_putchar` twice in your code

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 1-main.c

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
mathieu@ubuntu:~/$ ./1-alphabet

abcdefghijklmnopqrstuvwxyz

```
</details>

-----------------------

#### [2. 10 x Alphabet](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/2-print_alphabet_x10.c)

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

  - Prototype: `void print_alphabet_x10(void);` 
  - You can only use `_putchar` twice in your code

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 2-main.c

#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
mathieu@ubuntu:~/$ ./2-alphabet_x10 

abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz 
```
</details>

------------------------

#### [3. Islower](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/3-islower.c)

Write a function that checks for lowercase character.

  - Prototype: int `_islower(int c);`
  - Returns `1` if `c` is lowercase
  - Returns `0` otherwise

FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 3-main.c 

#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-islower.c -o 3-islower
mathieu@ubuntu:~/$ ./3-islower 

011
```
</details>

--------------------------

#### [4. Isalpha](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/4-isalpha.c)

Write a function that checks for alphabetic character.

  - Prototype: `int _isalpha(int c);`
  - Returns `1` if `c` is a letter, lowercase or uppercase
  - Returns `0` otherwise

FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 4-main.c 

#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
mathieu@ubuntu:~/$ ./4-isalpha 

1110
```
</details>

----------------------------

#### [5. Sign](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/5-sign.c)

Write a function that prints the sign of a number.

  - Prototype: `int print_sign(int n);`
  - Returns `1` and prints `+` if `n` is greater than zero
  - Returns `0` and prints `0` if `n` is zero
  - Returns `-1` and prints `-` if `n` is less than zero

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 5-main.c

#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 5-main.c 5-sign.c -o 5-sign
mathieu@ubuntu:~/$ ./5-sign 

+, 1
0, 0
+, 1
-, / 
```
</details>

------------------------------

#### [6. There Is No Such Thing As Absolute Value In This World. You Can Only Estimate What a Thing Is Worth To You](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/6-abs.c)

Write a function that computes the absolute value of an integer.

  - Prototype: `int _abs(int);`

FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 6-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-abs.c -o 6-abs
mathieu@ubuntu:~/$ ./6-abs

1
0
1
98
```
</details>

--------------------------

#### [7. There Are Only 3 Colors, 10 Digits, And 7 Notes; It's What We Do With Them That's Important](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/7-print_last_digit.c)

Write a function that prints the last digit of a number.

  - Prototype: `int print_last_digit(int);`
  - Returns the value of the last digit

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
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
mathieu@ubuntu:~/$ ./7-last_digit 

8044 
```
</details>

------------------------------------

#### [8. I'm Federal Agent Jack Bauer, And Today Is The Longest Day Of My Life](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/8-24_hours.c)

Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

  - Prototype: `void jack_bauer(void);`
  - You can listen to [this soundtrack](https://intranet.hbtn.io/rltoken/mJ7JsWWRo9nxTuauK1Uyuw) while coding :)

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
    jack_bauer();
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 8-main.c 8-24_hours.c -o 8-24
mathieu@ubuntu:~/$ ./8-24 | head

00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09

mathieu@ubuntu:~/$ ./8-24 | tail

23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59

mathieu@ubuntu:~/$ ./8-24 | wc -l

1440
```
</details>

------------------------------

#### [9. Learn Your Times Table](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/9-times_table.c)

Write a function that prints the 9 times table, starting with 0.

  - Prototype: `void times_table(void);`

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 9-main.c

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 9-main.c 9-times_table.c -o 9-times_table
mathieu@ubuntu:~/$ ./9-times_table | cat -e

0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$

mathieu@ubuntu:~/$ ./9-times_table | tr ' ' . | cat -e

0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
```
</details>

----------------------------------

#### [10. A + B](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/10-add.c)

Write a function that adds two integers and returns the result.

  - Prototype: `int add(int, int);`

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 10-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 10-main.c 10-add.c -o 10-add
mathieu@ubuntu:~/$ ./10-add 

98
```
</details>

-----------------------------

#### [11. 98 Battery Street, The OG](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/11-print_to_98.c)

Write a function that prints all natural numbers from `n` to `98`, followed by a new line.

  - Prototype: `void print_to_98(int n);`
  - Numbers must be separated by a comma, followed by a space
  - Numbers should be printed in order
  - The first printed number should be the number passed to your function
  - The last printed number should be `98`
  - You are allowed to use the standard library

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 11-main.c

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 11-main.c 11-print_to_98.c -o 11-98
mathieu@ubuntu:~/$ ./11-98 

0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
```
</details>

------------------------------------

#### [12. The World Looks Like a Multiplication-Table, Or a Mathematical Equation, Which, Turn It How You Will, Balances Itself](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/100-times_table.c)

Write a function that prints the n times table, starting with 0.

  - Prototype: `void print_times_table(int n);
  - If `n` is greater than `15` or less than `0` the function should not print anything

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 100-main.c

#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
mathieu@ubuntu:~/$ ./100-times_table 

0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144

mathieu@ubuntu:~/$ ./100-times_table | tr ' ' . | cat -e

0,...0,...0,...0$
0,...1,...2,...3$
0,...2,...4,...6$
0,...3,...6,...9$
$
0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5$
0,...2,...4,...6,...8,..10$
0,...3,...6,...9,..12,..15$
0,...4,...8,..12,..16,..20$
0,...5,..10,..15,..20,..25$
$
$
0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$ 
```
</details>

---------------------

#### [13. Nature made The Natural Numbers; All Else Is The Work Of Women](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/101-natural.c)

If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.

  - You are allowed to use the standard library
  
---------------------------------

#### [14. In Computer Class, The First Assignment Was To Write a Program To Print The First 100 Fibonacci Numbers. Instead, I Wrote a Program That Would Steal Passwords Of Students. My Teacher Gave Me An A](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/102-fibonacci.c)

Write a program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.

  - The numbers must be separated by comma, followed by a space `,` 
  - You are allowed to use the standard library

-----------------------

#### [15. Even Liber Abbaci](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/103-fibonacci.c)

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with `1` and `2`, the first 10 terms will be: `1`, `2`, `3`, `5`, `8`, `13`, `21`, `34`, `55`, `89`. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

  - You are allowed to use the standard library
  
-----------------------

#### [16. In Computer Class, The First Assignment Was To Write a Program To Print The First 100 Fibonacci Numbers. Instead, I Wrote a Program That Would Steal Passwords Of Students. My Teacher Gave Me An A+](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x02-functions_nested_loops/104-fibonacci.c)

Write a program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.

  - The numbers should be separated by comma, followed by a space ,
  - You are allowed to use the standard library
  - You are not allowed to use any other library (You can’t use `GMP` etc…)
  - You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
  - You are not allowed to hard code any Fibonacci number (except for `1` and `2`)
  
-----------------------

## AUTHOR

- Mathieu Morel
