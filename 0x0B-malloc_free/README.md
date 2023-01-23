# C - MALLOC, FREE

<img src="https://grandidierite.github.io/assets/img/dynamic.jpg" width="100%">

## Resources
### Read or Watch : 

- [Automatic And Dynamic Allocation, Malloc And Free](https://intranet.hbtn.io/concepts/891)
- [0x0a - Malloc & Free - Quick Overview.pdf](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221029%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221029T172309Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=7f18214d8789a4d16f1a67bb66e13e2b395e74f067771c7f588bbf1e22990c48)
- [Dynamic Memory Allocation In C - Malloc Calloc Realloc Free](https://www.youtube.com/watch?v=xDVC3wKjS64)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc` and `free`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [main.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/main.h)
- Don’t forget to push your header file

-----------------------------------

# TASKS

#### [0. Float Like a Butterfly, Sting Like a Bee](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)

Write a function that creates an array of chars, and initializes it with a specific char.

 - Prototype: `char *create_array(unsigned int size, char c);`
 - Returns `NULL` if size = `0`
 - Returns a pointer to the array, or `NULL` if it fails

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/0x0a. malloc, free$ cat 0-main.c 

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}

mathieu@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
mathieu@ubuntu:~/0x0a. malloc, free$ ./a 
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
```
</details>

---------------------------------------------

#### [1. The Woman Who Has No Imagination Has No Wings](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

 - Prototype: `char *_strdup(char *str);`
 - The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
 - Returns `NULL` if str = NULL
 - On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available

FYI: The standard library provides a similar function: `strdup`. Run `man strdup` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/0x0a. malloc, free$ cat 1-main.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("Duplicated");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

mathieu@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
mathieu@ubuntu:~/0x0a. malloc, free$ ./s 
Duplicated
```
</details>

----------------------------------

#### [2. He Who Is Not Courageous Enough To Take Risks Will Accomplish Nothing In Life](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c)

Write a function that concatenates two strings.

 - Prototype: `char *str_concat(char *s1, char *s2);`
 - The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
 - if `NULL` is passed, treat it as an empty string
 - The function should return `NULL` on failure

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/0x0a. malloc, free$ cat 2-main.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = str_concat("Best ", "School");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}

mathieu@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o 2-str_concat
mathieu@ubuntu:~/0x0a. malloc, free$ ./2-str_concat | cat -e
Best School$
```
</details>

---------------------------------------------------

#### [3. If You Even Dream Of Beating Me You'd Better Wake Up And Apologize](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)

Write a function that returns a pointer to a 2 dimensional array of integers.

 - Prototype: `int **alloc_grid(int width, int height);`
 - Each element of the grid should be initialized to `0`
 - The function should return `NULL` on failure
 - If `width` or `height` is `0` or negative, return `NULL`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/0x0a. malloc, free$ cat 3-main.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    return (0);
}

mathieu@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o 3-alloc_grid
mathieu@ubuntu:~/0x0a. malloc, free$ ./3-alloc_grid
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
```
</details>

--------------------------------------------

#### [4. It's Not Bragging If You Can Back It Up](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c)

Write a function that frees a 2 dimensional grid previously created by your `alloc_grid` function.

 - Prototype: `void free_grid(int **grid, int height);`
 - Note that we will compile with your `alloc_grid.c` file. Make sure it compiles.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/0x0a. malloc, free$ cat 4-main.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
    int w;
    int h;

    h = 0;
    while (h < height)
    {
        w = 0;
        while (w < width)
        {
            printf("%d ", grid[h][w]);
            w++;
        }
        printf("\n");
        h++;
    }   
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int **grid;

    grid = alloc_grid(6, 4);
    if (grid == NULL)
    {
        return (1);
    }
    print_grid(grid, 6, 4);
    printf("\n");
    grid[0][3] = 98;
    grid[3][4] = 402;
    print_grid(grid, 6, 4);
    free_grid(grid, 4);
    return (0);
}

mathieu@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o 4-free_grid
mathieu@ubuntu:~/0x0a. malloc, free$ valgrind ./4-free_grid
==5013== Memcheck, a memory error detector
==5013== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==5013== Command: ./f
==5013== 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 

0 0 0 98 0 0 
0 0 0 0 0 0 
0 0 0 0 0 0 
0 0 0 0 402 0 
==5013== 
==5013== HEAP SUMMARY:
==5013==     in use at exit: 0 bytes in 0 blocks
==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
==5013== 
==5013== All heap blocks were freed -- no leaks are possible
==5013== 
==5013== For counts of detected and suppressed errors, rerun with: -v
==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
</details>

----------------------------------------

#### [5. It Isn't The Mountains Ahead To Climb That Wear You Out; It's The Pebble In Your Shoe](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/100-argstostr.c)
Write a function that concatenates all the arguments of your program.

- Prototype: `char *argstostr(int ac, char **av);`
- Returns `NULL` if `ac == 0` or `av == NULL`
- Returns a pointer to a new string, or `NULL` if it fails
- Each argument should be followed by a `\n` in the new string

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/0x0a. malloc, free$ cat 100-main.c

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}

mathieu@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args
mathieu@ubuntu:~/0x0a. malloc, free$ ./args I will "show you" how great I am
./args
I
will
show you
how
great
I
am
```
</details>

--------------------------------------

#### [6. I Will Show You How Great I Am](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0B-malloc_free/101-strtow.c)
Write a function that splits a string into words.

- Prototype: `char **strtow(char *str);`
- The function returns a pointer to an array of strings (words)
- Each element of this array should contain a single word, null-terminated
- The last element of the returned array should be `NULL`
- Words are separated by spaces
- Returns `NULL` if `str == NULL` or `str == ""`
- If your function fails, it should return `NULL`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/0x0a. malloc, free$ cat 101-main.c
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
    int i;

    for (i = 0; tab[i] != NULL; ++i)
    {
        printf("%s\n", tab[i]);
    }
}

/**
 * main - check the code
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("      Best School         #cisfun      ");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}

mathieu@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow
mathieu@ubuntu:~/0x0a. malloc, free$ ./strtow | cat -e
Best$
School$
#cisfun$
```
</details>

------------------------------

## Author

- Mathieu Morel
