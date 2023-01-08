# C - POINTERS, ARRAYS AND STRINGS

![img](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/216/IMG_2410.JPG)

## CONCEPTS

For this project, we expect you to look at these concepts :

- [Pointers and arrays](https://intranet.hbtn.io/concepts/888)
- [Data Structures](https://intranet.hbtn.io/concepts/889)

## RESOURCES
### Read or Watch :

- [C - Arrays](https://intranet.hbtn.io/rltoken/1PQnbj1BHB7w_mKhxhMWdg)
- [C - Pointers](https://intranet.hbtn.io/rltoken/G2_eTEuCaSAXfKYuEteXfQ)
- [C - Strings](https://intranet.hbtn.io/rltoken/N7AFmcH2JyKF35ly2RH1Uw)
- [Memory Layout](https://intranet.hbtn.io/rltoken/6MlL0ucmD6kNwXANZFZJEg)

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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [main.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/main.h)
- Don’t forget to push your header file

----------------------------

# TASKS

#### [0. 98 Battery St.](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/0-reset_to_98.c)

Write a function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.

- Prototype: `void reset_to_98(int *n)`;

<details>
<summary> File Compilation / Test </summary>
<br>

```
mathieu@ubuntu:~/$ cat 0-main.c

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

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
mathieu@ubuntu:~/$ ./0-98 
n=402
n=98
```
</details>

----------------------------------

#### [1. Don't Swap Horses In. Crossing a Stream](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/1-swap.c)

Write a function that swaps the values of two integers.

- Prototype: `void swap_int(int *a, int *b)`;

<details>
<summary> File Compilation / Test </summary>
<br>

```
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
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
mathieu@ubuntu:~/$ ./1-swap 
a=98, b=42
a=42, b=98
```
</details>

----------------------------

#### [2. This Report, By Its Very Length, Defends Itself Against The Risk Of Being Read](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/2-strlen.c)

Write a function that returns the length of a string.

  - Prototype: `int _strlen(char *s)`;

FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.
<details>
<summary> File Compilation / Test </summary>
<br>

```
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
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
mathieu@ubuntu:~/$ ./2-strlen 
16
```
</details>

----------------------

#### [3. I Do Not Fear Computers. I Fear The Lack Of Them](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/3-puts.c)

Write a function that prints a string, followed by a new line, to `stdout`.

- Prototype: `void _puts(char *str)`;

FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

<details>
<summary> File Compilation / Test </summary>
<br>

```
mathieu@ubuntu:~/$ cat 3-main.c

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
mathieu@ubuntu:~/$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
```
</details>

-----------------------------

#### [4. I Can Only Go One Way. I've Not Got a Reverse Gear](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/4-print_rev.c)

Write a function that prints a string, in reverse, followed by a new line.

  - Prototype: `void print_rev(char *s)`;
<details>
<summary> File Compilation / Test </summary>
<br>

```
mathieu@ubuntu:~/$ cat 4-main.c

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
mathieu@ubuntu:~/$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
```
</details>

----------------------------

#### [5. A Good Engineer Thinks In Reverse And Asks Himself About The Stylistic Consequences Of The Components And Systems He Proposes](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/5-rev_string.c)

Write a function that reverses a string.

 - Prototype: `void rev_string(char *s)`;
<details>
<summary> File Compilation / Test </summary>
<br>

```
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
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
mathieu@ubuntu:~/$ ./5-rev_string 
My School
loohcS yM
```
</details>

--------------------------------------

#### [6. Half The Lies They Tell About Me Aren't True](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/6-puts2.c)

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

 - Prototype: `void puts2(char *str)`;
<details>
<summary> File Compilation / Test </summary>
<br>

```
mathieu@ubuntu:~/$ cat 6-main.c

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
mathieu@ubuntu:~/$ ./6-puts2 
02468
```
</details>

--------------------------------

#### [7. Winnings Is Only Half Of It. Having Fun Is The Other Half](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/7-puts_half.c)

Write a function that prints half of a string, followed by a new line.

 - Prototype: `void puts_half(char *str)`;
 - The function should print the second half of the string
 - If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`
<details>
<summary> File Compilation / Test </summary>
<br>

```
mathieu@ubuntu:~/$ cat 7-main.c

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
mathieu@ubuntu:~/$ ./7-puts_half 
56789
```
</details>

------------------------------------------

#### [8. Arrays Are Not Pointers](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/8-print_array.c)

Write a function that prints `n` elements of an array of integers, followed by a new line.

 - Prototype: `void print_array(int *a, int n)`;
 - Where `n` is the number of elements of the array to be printed
 - Numbers must be separated by comma, followed by a space
 - The numbers should be displayed in the same order as they are stored in the array
 - You are allowed to use `printf`
<details>
<summary> File Compilation / Test </summary>
<br>

```
mathieu@ubuntu:~/$ cat 8-main.c

#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
mathieu@ubuntu:~/$ ./8-print_array 
98, 402, -198, 298, -1024
```
</details>

-----------------------------------

#### [9. Strcpy](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/9-strcpy.c)

 - Prototype: `char *_strcpy(char *dest, char *src)`;

Write a function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.

 - Return value: the pointer to `dest`

FYI: The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.
<details>
<summary> File Compilation / Test </summary>
<br>

```
mathieu@ubuntu:~/$ cat 9-main.c

#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
mathieu@ubuntu:~/$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
```
</details>

---------------------------------

#### [10. Great Leaders Are Willing To Sacrifice The Numbers To Save The People. Poor Leaders Sacrifice The People To Save The Numbers](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/100-atoi.c)

Write a function that convert a string to an integer.

- Prototype: `int _atoi(char *s)`;
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the `-` and `+` signs before the number
- If there are no numbers in the string, the function must return `0`
- You are not allowed to use `long`
- You are not allowed to declare new variables of “type” array
- You are not allowed to hard-code special values
- We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.

FYI: The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.
<details>
<summary> File Compilation / Test </summary>
<br>

```
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
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
mathieu@ubuntu:~/$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
```
</details>

-------------------------------

#### [11. Don't Hate The Hacker, Hate The Code](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/101-keygen.c)

Create a program that generates random valid passwords for the program [101-crackme](https://github.com/hs-hq/0x04.c).

- You are allowed to use the standard library
- You don’t have to pass the `betty-style` tests (you still need to pass the `betty-doc` tests)
- man `srand`, `rand`, `time`
- `gdb` and `objdump` can help
<details>
<summary> File Compilation / Test </summary>
<br>

```
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen
mathieu@ubuntu:~/$ ./101-crackme "`./101-keygen`"
Tada! Congrats
```
</details>

---------------------------

## AUTHOR

- Mathieu Morel
