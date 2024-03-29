# <p align=center>C - EVEN MORE POINTERS, ARRAYS AND STRINGS</p>

<img src="https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/218/58fe6b229144b7fe5ebe88afe9ff5cabe2dd0863e1e79b2d02b4103c30b465dd.jpg" width="100%">

## Description
### Even More Pointers, Arrays, and Strings

Pointers, arrays, and strings are fundamental concepts in C programming, and there are many more ways to use and manipulate them.  
  
One advanced concept related to pointers is the use of **pointers to pointers**. This allows for the creation of a pointer that points to another pointer. This can be useful in situations where the memory location of a pointer needs to be modified.

```c
int x = 10;
int *ptr1 = &x;
int **ptr2 = &ptr1;
printf("Value of x: %d\n", x); // Output: Value of x: 10
printf("Value at location pointed by ptr1: %d\n", *ptr1); // Output: Value at location pointed by ptr1: 10
printf("Value at location pointed by ptr2: %d\n", **ptr2); // Output: Value at location pointed by ptr2: 10
```

In this example, `ptr1` is a pointer to the memory location of `x`, and `ptr2` is a pointer to the memory location of `ptr1`, which in turn holds the memory location of `x`.  
  
Another advanced concept is the use of **multidimensional arrays**. These are arrays that have more than one dimension, allowing for the creation of arrays with multiple levels of elements. For example, a 2-dimensional array can be thought of as a matrix of elements.

```c
int arr[2][3] = { {1, 2, 3}, {4, 5, 6} };
printf("Value at arr[1][2]: %d\n", arr[1][2]); // Output: Value at arr[1][2]: 6
```

In this example, `arr` is a 2-dimensional array with 2 rows and 3 columns. The value at index `[1][2]` is 6.  
  
To summarise, pointers to pointers, and multidimensional arrays are advanced concepts that can be used to manipulate memory and data in C programming. Understanding and effectively utilizing these concepts is crucial for writing efficient and safe C code.

## Resources
### Read or Watch:

 - [C - Pointer To Pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
 - [C - Pointer To Pointer With Example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
 - [Multi-Dimensional Arrays In C](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
 - [Two Dimensional (2D) Arrays In C Programming With Example](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [main.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/main.h)
- Don’t forget to push your header file

----------------------------

# TASKS

#### [0. Memset](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/0-memset.c)

Write a function that fills memory with a constant byte.

 - Prototype: `char *_memset(char *s, char b, unsigned int n);`
 - The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
 - Returns a pointer to the memory area `s`

FYI: The standard library provides a similar function: `memset`. Run `man memset` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 0-main.c

#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
mathieu@ubuntu:~/$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
```
</details>

------------------------------------

#### [1. Memcpy](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/1-memcpy.c)

Write a function that copies memory area.

 - Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
 - The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
 - Returns a pointer to `dest`

FYI: The standard library provides a similar function: `memcpy`. Run `man memcpy` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 1-main.c

#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
mathieu@ubuntu:~/$ ./1-memcpy 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05   0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
```
</details>

-----------------------------

#### [2. Strchr](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/2-strchr.c)

Write a function that locates a character in a string.

 - Prototype: `char *_strchr(char *s, char c);`
 - Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found

FYI: The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.

<details>
<summary> Test File </summary>
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
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
mathieu@ubuntu:~/$ ./2-strchr 
llo
```
</details>

------------------------------

#### [3. Strspn](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/3-strspn.c)

Write a function that gets the length of a prefix substring.

 - Prototype: `unsigned int _strspn(char *s, char *accept);`
 - Returns the number of bytes in the initial segment of s which consist only of bytes from `accept`

FYI: The standard library provides a similar function: `strspn`. Run `man strspn` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 3-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
mathieu@ubuntu:~/$ ./3-strspn 
5
```
</details>

-----------------------------------------

#### [4. Strpbrk](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/4-strpbrk.c)

Write a function that searches a string for any of a set of bytes.

 - Prototype: `char *_strpbrk(char *s, char *accept);`
 - The `_strpbrk()` function locates the first occurrence in the string `s` of any of the bytes in the string `accept`
 - Returns a pointer to the byte in `s` that matches one of the bytes in `accept`, or `NULL` if no such byte is found

FYI: The standard library provides a similar function: `strpbrk`. Run `man strpbrk` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 4-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strpbrk(s, f);
    printf("%s\n", t);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-strpbrk.c -o 4-strpbrk
mathieu@ubuntu:~/$ ./4-strpbrk 
llo, world
```
</details>

--------------------------------

#### [5. Strstr](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/5-strstr.c)

Write a function that locates a substring.

 - Prototype: `char *_strstr(char *haystack, char *needle);`
 - The `_strstr()` function finds the first occurrence of the substring `needle` in the string `haystack`. The terminating null bytes (`\0`) are not compared
 - Returns a pointer to the beginning of the located substring, or `NULL` if the substring is not found.

FYI: The standard library provides a similar function: `strstr`. Run `man strstr` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 5-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "world";
    char *t;

    t = _strstr(s, f);
    printf("%s\n", t);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-strstr.c -o 5-strstr
mathieu@ubuntu:~/$ ./5-strstr 
world
```
</details>

------------------------------

#### [6. Chess Is Mental Torture](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/7-print_chessboard.c)

Write a function that prints the chessboard.

 - Prototype: `void print_chessboard(char (*a)[8]);`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 7-main.c 

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char board[8][8] = {
        {'r', 'k', 'b', 'q', 'k', 'b', 'k', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'K', 'B', 'Q', 'K', 'B', 'K', 'R'},
    };
    print_chessboard(board);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-print_chessboard.c -o 7-print_chessboard
mathieu@ubuntu:~/$ ./7-print_chessboard 
rkbqkbkr
pppppppp




PPPPPPPP
RKBQKBKR
```
</details>

------------------------------

#### [7. The Line Of Life Is a Ragged Diagonal Between Duty And Desire](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/8-print_diagsums.c)

Write a function that prints the sum of the two diagonals of a square matrix of integers.

 - Prototype: `void print_diagsums(int *a, int size);`
 - Format: see example
 - You are allowed to use the standard library

Note that in the following example we are casting an `int[][]` into an `int*`. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 8-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_diagsums.c -o 8-print_diagsums
mathieu@ubuntu:~/$ ./8-print_diagsums 
113, 1016
1214556093, 1137318
```
</details>

--------------------------------

#### [8. Double Pointer, Double Fun](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/100-set_string.c)
Write a function that sets the value of a pointer to a char.

- Prototype: `void set_string(char **s, char *to);`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/$ cat 100-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s0 = "Bob Dylan";
    char *s1 = "Robert Allen";

    printf("%s, %s\n", s0, s1);
    set_string(&s1, s0);
    printf("%s, %s\n", s0, s1);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-set_string.c -o 100-set_string
mathieu@ubuntu:~/$ ./100-set_string 
Bob Dylan, Robert Allen
Bob Dylan, Bob Dylan
```
</details>

-------------------------------

#### [9. My Primary Goal Of Hacking Was The Intellectual Curiosity, The Seduction Of Adventure](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x07-pointers_arrays_strings/101-crackme_password)
Create a file that contains the password for the [crackme2](https://github.com/hs-hq/0x06.c) executable.

- Your file should contain the exact password, no new line, no extra space
- `ltrace`, `ldd`, `gdb` and `objdump` can help
- You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
- Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` Then `sudo apt update` and `sudo apt install libssl1.0.0`

--------------------------------

## Author

- Mathieu Morel
