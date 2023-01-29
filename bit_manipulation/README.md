# C - BIT MANIPULATION

<img src="https://static.vecteezy.com/system/resources/previews/004/525/039/non_2x/binary-code-background-abstract-technology-digital-binary-data-and-secure-data-concept-free-photo.jpg" width="100%">

## Description
### Bit Manipulation in C

Bit manipulation is the process of modifying individual bits in a value stored in memory. It is a powerful technique used in many areas of computer science, including low-level system programming, optimization, cryptography, and more. In C, bit manipulation is performed using bitwise operations.

### Bitwise Operations

In C, there are several bitwise operations that can be performed on integers:
  
- `&` (and): sets each bit in the result to 1 if both corresponding bits in the operands are 1.
- `|` (or): sets each bit in the result to 1 if either of the corresponding bits in the operands are 1.
- `^` (xor): sets each bit in the result to 1 if exactly one of the corresponding bits in the operands is 1.
- `~` (not): inverts each bit in the operand.
- `&#8203;` oaicite:{"index":0,"invalid_reason":"Malformed citation <<`(left shift): shifts each bit in the operand to the left by a specified number of positions.\n-`>>"}`&#8203;` (right shift): shifts each bit in the operand to the right by a specified number of positions.   
  
### Bitwise Masking
  
Bitwise masking is a common use of bit manipulation in C. It involves using a bit mask, which is a binary value with certain bits set to 1, to modify specific bits in another value. For example, to set the 3rd and 4th bits in an 8-bit value to 1, you would perform an or operation with the value `0b000001100`.

```c
unsigned char value = 0b00000000;
unsigned char mask = 0b000001100;
value = value | mask;
```

This sets the value of `value` to `0b000001100`.

### Bit Fields

In C, you can also define variables with specific bit lengths using the `struct` and `bitfield` keywords. This allows you to pack several variables into a single memory location, reducing memory usage.

```c
struct {
  unsigned int width:5;
  unsigned int height:5;
  unsigned int type:2;
} image;
```

This defines a `struct` named `image` that contains three variables: `width`, `height`, and `type`. Each variable is specified with a specific bit length, allowing them to be packed into a single memory location.  
  
Bit manipulation is a powerful technique that can be used to perform a wide range of tasks. However, it can also be complex and error-prone, so it's important to use it carefully and with a good understanding of how it works.
   
## Resources
### Read or Watch : 

- [Google](https://www.google.com/webhp?q=bit+manipulation+C)
- [Youtube](https://www.youtube.com/results?search_query=bitwise+operators+in+c)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and `exit`. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [main.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/main.h)
- Don’t forget to push your header file
- All your header files should be include guarded

----------------------

# TASKS

#### [0. 0](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/0-binary_to_uint.c)

Write a function that converts a binary number to an `unsigned int`.

- Prototype: `unsigned int binary_to_uint(const char *b);`
- where `b` is pointing to a string of `0` and `1` chars
- Return: the converted number, or 0 if
  - there is one or more chars in the string `b` that is not `0` or `1`
  - `b` is `NULL`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Binary$ cat 0-main.c
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = binary_to_uint("1");
    printf("%u\n", n);
    n = binary_to_uint("101");
    printf("%u\n", n);
    n = binary_to_uint("1e01");
    printf("%u\n", n);
    n = binary_to_uint("1100010");
    printf("%u\n", n);
    n = binary_to_uint("0000000000000000000110010010");
    printf("%u\n", n);
    return (0);
}

mathieu@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
mathieu@ubuntu:~/Binary$ ./a 
1
5
0
98
402
```
</details>

----------------------------

#### [1. 1](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/1-print_binary.c)

Write a function that prints the binary representation of a number.

- Prototype: `void print_binary(unsigned long int n);`
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use `malloc`
- You are not allowed to use the `%` or `/` operators

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Binary$ cat 1-main.c 

#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(98);
    printf("\n");
    print_binary(1024);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}

mathieu@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
mathieu@ubuntu:~/Binary$ ./b 
0
1
1100010
10000000000
10000000001
```
</details>

------------------------

#### [2. 10](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/2-get_bit.c)

Write a function that returns the value of a bit at a given index.

- Prototype: `int get_bit(unsigned long int n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to get
- Returns: the value of the bit at index `index` or `-1` if an error occured

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Binary$ cat 2-main.c

#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = get_bit(1024, 10);
    printf("%d\n", n);
    n = get_bit(98, 1);
    printf("%d\n", n);
    n = get_bit(1024, 0);
    printf("%d\n", n);
    return (0);
}

mathieu@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c    
mathieu@ubuntu:~/Binary$ ./c
1
1
0
```
</details>

----------------------------

#### [3. 11](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/3-set_bit.c)

Write a function that sets the value of a bit to `1` at a given index.

- Prototype: `int set_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Binary$ cat 3-main.c

#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    set_bit(&n, 5);
    printf("%lu\n", n);
    n = 0;
    set_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    set_bit(&n, 0);
    printf("%lu\n", n);
    return (0);
}

mathieu@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
mathieu@ubuntu:~/Binary$ ./d
1056
1024
99
```
</details>

-----------------------------

#### [4. 100](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/4-clear_bit.c)

Write a function that sets the value of a bit to `0` at a given index.

- Prototype: `int clear_bit(unsigned long int *n, unsigned int index);`
- where `index` is the index, starting from `0` of the bit you want to set
- Returns: `1` if it worked, or `-1` if an error occurred

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Binary$ cat 4-main.c

#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned long int n;

    n = 1024;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 0;
    clear_bit(&n, 10);
    printf("%lu\n", n);
    n = 98;
    clear_bit(&n, 1);
    printf("%lu\n", n);
    return (0);
}

mathieu@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
mathieu@ubuntu:~/Binary$ ./e
0
0
96
```
</details>

--------------------------

#### [5. 101](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x14-bit_manipulation/5-flip_bits.c)

Write a function that returns the number of bits you would need to flip to get from one number to another.

- Prototype: `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- You are not allowed to use the `%` or `/` operators

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Binary$ cat 5-main.c

#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    unsigned int n;

    n = flip_bits(1024, 1);
    printf("%u\n", n);
    n = flip_bits(402, 98);
    printf("%u\n", n);
    n = flip_bits(1024, 3);
    printf("%u\n", n);
    n = flip_bits(1024, 1025);
    printf("%u\n", n);
    return (0);
}

mathieu@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
mathieu@ubuntu:~/Binary$ ./f
2
5
3
1
```
</details>

---------------------------

#### [6. Endianness](url)

Write a function that checks the endianness.

- Prototype: `int get_endianness(void);`
- Returns: `0` if big endian, `1` if little endian

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Binary$ cat 100-main.c

#include <stdio.h>
#include "main.h"

int main(void)
{
    int n;

    n = get_endianness();
    if (n != 0)
    {
        printf("Little Endian\n");
    }
    else
    {
        printf("Big Endian\n");
    }
    return (0);
}

mathieu@ubuntu:~/Binary$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-get_endianness.c -o h
mathieu@ubuntu:~/Binary$ ./h 
Little Endian
julien@ubuntu:~/Binary$ lscpu | head
Architecture:          x86_64
CPU op-mode(s):        32-bit, 64-bit
Byte Order:            Little Endian
CPU(s):                1
On-line CPU(s) list:   0
Thread(s) per core:    1
Core(s) per socket:    1
Socket(s):             1
NUMA node(s):          1
Vendor ID:             GenuineIntel
```
</details>

--------------------------

#### [7. Crackme3](url)

Find the password for [this program](https://github.com/holbertonschool/0x13.c).

- Save the password in the file `101-password`
- Your file should contain the exact password, no new line, no extra space

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/Binary$ ./crackme3 `cat 101-password`
Congratulations!
```
</details>

---------------------

#### [8. Two's Complement And Negative Numbers](url)

Write a blog post on how integers are stored in memory using two’s complement.

- Have at least one picture, at the top of the blog post
- Have a few examples covering positive and negative numbers
- Publish your blog post on Medium or LinkedIn
- Share your blog post at least on LinkedIn

--------------------------------------

## Author

- Mathieu Morel
