# <p align=center>C - RECURSION</p>

<img src="https://res.cloudinary.com/practicaldev/image/fetch/s--tw3NWqpc--/c_imagga_scale,f_auto,fl_progressive,h_900,q_auto,w_1600/https://dev-to-uploads.s3.amazonaws.com/i/vs461z5rnco8mvjkk1og.jpg" width="100%">

## Description
### Recursion

Recursion is a programming concept in which a function calls itself. This can be a useful tool in solving certain types of problems, such as traversing a tree structure or generating a sequence of numbers.  
  
A basic example of recursion is the function for calculating the factorial of a number. The factorial of a number is the product of all the numbers from 1 to that number. For example, the factorial of 5 (written as 5!) is 1 * 2 * 3 * 4 * 5 = 120.

```c
int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n-1);
}
printf("5! = %d\n", factorial(5)); // Output: 5! = 120
```

In this example, the function `factorial()` calls itself with the input `n-1` until the base case of `n == 0` is reached. At that point, the function returns 1 and the recursive calls return the product of each value of `n` until the original call returns the final value of 120.  
  
Another example of recursion is a function for traversing a tree structure. The function first visits the root node, then recursively visits each of its children, and so on until all nodes have been visited.

```c
void traverse(struct node *root) {
    if (root == NULL) {
        return;
    }
    printf("Visiting node with value %d\n", root->value);
    traverse(root->left);
    traverse(root->right);
}
```

In this example, the function `traverse()` visits the current node, then recursively calls itself on the left and right children of the current node, until all nodes have been visited.  
  
To sum up, recursion is a powerful concept that allows for a function to call itself in order to solve a problem. It can be used to perform repetitive tasks, such as traversing a tree structure, or generating a sequence of numbers. It is important to include a base case in the function to stop the recursion from going on indefinitely.

## Resources
### Read or Watch:

- [Recursion, Introduction](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/2818ba6f14f644b871dcbd746925fa15b8cd5937.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221018%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221018T183432Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=b1d6c05e2f94a336701aef358ec50b646dac2cb047882df260f65c122b0ef5f7)
- [What On Earth Is Recursion ?](https://www.youtube.com/watch?v=Mv9NEXX1VHc)
- [C - Recursion](https://www.tutorialspoint.com/cprogramming/c_recursion.htm)
- [C Programming Tutorial 85, Recursion pt. 1](https://www.youtube.com/watch?v=XGxbXMP6k8k)
- [C Programming Tutorial 86, Recursion pt. 2](https://www.youtube.com/watch?v=7XiIS6HobNs)

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
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [main.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/main.h)
- Don’t forget to push your header file
- **You are not allowed to use any kind of loops**
- You are not allowed to use `static` variables

----------------------------

# TASKS

#### [0. She Locked Away a Secret, Deep Inside Herself, Something She Once Knew To Be True... But Chose To Forget](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/0-puts_recursion.c)

Write a function that prints a string, followed by a new line.

 - Prototype: `void _puts_recursion(char *s);`

FYI: The standard library provides a similar function: `puts`. Run `man puts` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Recursion$ cat 0-main.c

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _puts_recursion("Puts with recursion");
    return (0);
}

mathieu@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
mathieu@ubuntu:~/Recursion$ ./0-puts_recursion 
Puts with recursion
```
</details>

-------------------------------

#### [1. Why Is It Ss Important To Dream ? Because, In My Dreams We Are Together](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/1-print_rev_recursion.c)

Write a function that prints a string in reverse.

 - Prototype: `void _print_rev_recursion(char *s);`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Recursion$ cat 1-main.c

#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    _print_rev_recursion("\nColton Walker");
    return (0);
}

mathieu@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
mathieu@ubuntu:~/Recursion$ ./1-print_rev_recursion 
reklaW notloC
```
</details>

-----------------------------

#### [2. Dreams Feel Real While We're In Them. It's Only When We Wake Up That We Realize Something Was Actually Strange](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/2-strlen_recursion.c)

Write a function that returns the length of a string.

 - Prototype: `int _strlen_recursion(char *s);`

FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Recursion$ cat 2-main.c 

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

    n = _strlen_recursion("Corbin Coleman");
    printf("%d\n", n);
    return (0);
}

mathieu@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
mathieu@ubuntu:~/Recursion$ ./2-strlen_recursion 
14
```
</details>

-------------------------------

#### [3. You Mustn't Be Afraid To Dream a Little Bigger, Darling](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/3-factorial.c)

Write a function that returns the factorial of a given number.

 - Prototype: `int factorial(int n);`
 - If `n` is lower than `0`, the function should return `-1` to indicate an error
 - Factorial of `0` is `1`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Recursion$ cat 3-main.c

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

    r = factorial(1);
    printf("%d\n", r);
    r = factorial(5);
    printf("%d\n", r);
    r = factorial(10);
    printf("%d\n", r);
    r = factorial(-1024);
    printf("%d\n", r);
    return (0);
}

mathieu@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
mathieu@ubuntu:~/Recursion$ ./3-factorial 
1
120
3628800
-1
```
</details>

-------------------------------

#### [4. Once An Idea Has Taken Hold Of The Brain It's Almost Impossible To Eradicate](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/4-pow_recursion.c)

Write a function that returns the value of `x` raised to the power of `y`.

 - Prototype: `int _pow_recursion(int x, int y);`
 - If `y` is lower than `0`, the function should return `-1`

FYI: The standard library provides a different function: `pow`. Run `man pow` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Recursion$ cat 4-main.c

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

    r = _pow_recursion(1, 10);
    printf("%d\n", r);
    r = _pow_recursion(1024, 0);
    printf("%d\n", r);
    r = _pow_recursion(2, 16);
    printf("%d\n", r);
    r = _pow_recursion(5, 2);
    printf("%d\n", r);
    r = _pow_recursion(5, -2);
    printf("%d\n", r);
    r = _pow_recursion(-5, 3);
    printf("%d\n", r);
    return (0);
}

mathieu@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
mathieu@ubuntu:~/Recursion$ ./4-pow 
1
1
65536
25
-1
-125
```
</details>

-------------------------------

#### [5. Your Subconscious Is Looking For The Dreamer](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/5-sqrt_recursion.c)

Write a function that returns the natural square root of a number.

 - Prototype: `int _sqrt_recursion(int n);`
 - If `n` does not have a natural square root, the function should return `-1`

FYI: The standard library provides a different function: `sqrt`. Run `man sqrt` to learn more.

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Recursion$ cat 5-main.c 

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

    r = _sqrt_recursion(1);
    printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
    printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
    printf("%d\n", r);
    return (0);
}

mathieu@ubuntu:~/gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
mathieu@ubuntu:~/Recursion$ ./5-sqrt 
1
32
4
-1
5
-1
```
</details>

--------------------------------

#### [6. Inception. Is It Possible ?](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/6-is_prime_number.c)

Write a function that returns `1` if the input integer is a [prime number](https://en.wikipedia.org/wiki/Prime_number), otherwise return `0`.

 - `Prototype: int is_prime_number(int n);`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Recursion$ cat 6-main.c

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

    r = is_prime_number(1);
    printf("%d\n", r);
    r = is_prime_number(1024);
    printf("%d\n", r);
    r = is_prime_number(16);
    printf("%d\n", r);
    r = is_prime_number(17);
    printf("%d\n", r);
    r = is_prime_number(25);
    printf("%d\n", r);
    r = is_prime_number(-1);
    printf("%d\n", r);
    r = is_prime_number(113);
    printf("%d\n", r);
    r = is_prime_number(7919);
    printf("%d\n", r);
    return (0);
}

mathieu@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
mathieu@ubuntu:~/Recursion$ ./6-prime 
0
0
0
1
0
0
1
1
```
</details>

-------------------------------

#### [7. They Say We Only Use a Fraction Of Our Brain's True Potential. Now That's When We're Awake. When We're Asleep, We Can Do Almost Anything](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/100-is_palindrome.c)
Write a function that returns `1` if a string is a palindrome and `0` if not.

- Prototype: `int is_palindrome(char *s);`
- An empty string is a palindrome

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Recursion$ cat 100-main.c

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

    r = is_palindrome("level");
    printf("%d\n", r);
    r = is_palindrome("redder");
    printf("%d\n", r);
    r = is_palindrome("test");
    printf("%d\n", r);
    r = is_palindrome("step on no pets");
    printf("%d\n", r);
    return (0);
}

mathieu@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome
mathieu@ubuntu:~/Recursion$ ./100-palindrome 
1
1
0
1
```
</details>

----------------------------
#### [8. Inception. Now, Before You Bother Telling Me It's Impossible...](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x08-recursion/101-wildcmp.c)
Write a function that compares two strings and returns `1` if the strings can be considered identical, otherwise return `0`.

- Prototype: `int wildcmp(char *s1, char *s2);`
- `s2` can contain the special character `*`.
- The special char `*` can replace any string (including an empty string)

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Recursion$ cat 101-main.c

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

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("main.c", "m.*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "**.*c");
    printf("%d\n", r);
    r = wildcmp("main-main.c", "ma*in.c");
    printf("%d\n", r);
    r = wildcmp("main", "main*d");
    printf("%d\n", r);
    r = wildcmp("abc", "*b");
    printf("%d\n", r);
    return (0);
}

mathieu@ubuntu:~/Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-wildcmp.c -o 101-wildcmp
mathieu@ubuntu:~/Recursion$ ./101-wildcmp 
1
1
1
1
1
1
1
0
1
1
0
0
```
</details>

---------------------------

## Author

- Mathieu Morel
