# C - STRUCTURES, TYPEDEF

<img src="https://i.ytimg.com/vi/LGTfV6NINmo/maxresdefault.jpg" width="100%">

## Description
### Introduction to Structures, typedef in C

In C, a structure is a user-defined data type that can hold a collection of variables of different types. A structure can be thought of as a group of variables that are related to each other. For example, you can use a structure to represent a point in a two-dimensional space, which would have two variables, one for the x-coordinate and one for the y-coordinate.

### Declaring a Structure

To declare a structure, you use the `struct` keyword, followed by the name of the structure, and a list of variables enclosed in curly braces `{ }`. For example, the following declares a structure named `point` that has two variables, `x` and `y`:

```c
struct point {
    int x;
    int y;
};
```

You can also create a variable of the structure type by using `struct point p1;`

### Typedef

The `typedef` keyword allows you to create an alias for a data type. For example, you can use `typedef` to create an alias for a structure type so that you can use the structure name instead of the keyword `struct` each time you declare a variable of that type.

```c
typedef struct {
    int x;
    int y;
} point;
```

Now, you can create a variable of the `point` type using `point p1;`

### Accessing Structure Members

To access the members of a structure, you use the dot operator (`.`). For example, to set the x-coordinate of a point, you can use the following statement:

```c
p1.x = 10;
```

You can also use the arrow operator (`->`) to access the members of a structure through a pointer to the structure.

```c
point *p2 = &p1;
p2->x = 20;
```

Structures and typedef are powerful features in C programming, they make it possible to organize complex data and make the code more readable and maintainable. With the understanding of structures and typedef, you can design more complex data structures and improve your own C programs.

## Resources
### Read or Watch :

- [0x0d. Structures.pdf](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221105%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221105T121658Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=390d6d8ed1866baa64876e8d110b656242001f3f9e292ac58251ac93848be985)
- [Struct (C Programming Language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
- [Documentation: Structures](https://intranet.hbtn.io/rltoken/NuojX9XdNuRRcflJ64CSLQ)
- [0x0d. Typedef And Structures.pdf](https://intranet.hbtn.io/rltoken/NjiS7w3I0aOysFzTISENUA)
- [Typedef](https://intranet.hbtn.io/rltoken/6TX-aFGQs5sAtdtyXBnjyQ)
- Programming In C By Stephen Kochan - Chapter 8, Working With Structures p163-189
- [The Lost Art of C Structure Packing (Advanced - not mandatory)](https://intranet.hbtn.io/rltoken/qxIHARCFIPU4IGX12WVa0g)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/main/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/main/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `printf`, `malloc`, `free` and `exit`.
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- Don’t forget to push your header file
- All your header files should be include guarded

-----------------------------------------

# TASKS

#### [0. Poppy](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/dog.h)

Define a new type `struct dog` with the following elements:

 - `name`, type = `char *`
 - `age`, type = `float`
 - `owner`, type = `char *`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

mathieu@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
mathieu@ubuntu:~/0x0d. structures, typedef$ ./a 
My name is Poppy, and I am 3.5 :) - Woof!
```
</details>

-------------------------------------

#### [1. A Dog Is The Only Thing On Earth That Loves You More Than You Love Yourself](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/1-init_dog.c)

Write a function that initialize a variable of type `struct dog`

 - Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

mathieu@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
mathieu@ubuntu:~/0x0d. structures, typedef$ ./b 
My name is Poppy, and I am 3.5 :) - Woof!
```
</details>

-------------------------------

#### [2. A Dog Will Teach You Unconditional Love. If You Can Have That In Your Life, Things Won't Be Too Bad](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/2-print_dog.c)

Write a function that prints a `struct dog`

 - Prototype: `void print_dog(struct dog *d);`
 - Format: see example bellow
 - You are allowed to use the standard library
 - If an element of `d` is `NULL`, print `(nil)` instead of this element. (if `name` is `NULL`, print `Name: (nil)`)
 - If `d` is `NULL` print nothing.

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0d. structures, typedef$ cat 2-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    print_dog(&my_dog);
    return (0);
}

mathieu@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-print_dog.c -o c
mathieu@ubuntu:~/0x0d. structures, typedef$ ./c 
Name: Poppy
Age: 3.500000
Owner: Bob
```
</details>

_________________________________

#### [3. Outside Of a Dog, a Book Is a Man's Best Friend. Inside Of a Dog It's Too Dark To Read](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/dog.h)

Define a new type `dog_t` as a new name for the type `struct dog`.

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0d. structures, typedef$ cat 3-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}

mathieu@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
mathieu@ubuntu:~/0x0d. structures, typedef$ ./d 
My name is Poppy, and I am 3.5 :) - Woof!
```
</details>

-----------------------------

#### [4. A Door Is What a Dog Is Perpetually On The Wrong Side Of](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/4-new_dog.c)

Write a function that creates a new dog.

 - Prototype: `dog_t *new_dog(char *name, float age, char *owner)`;
 - You have to store a copy of `name` and `owner`
 - Return `NULL` if the function fails

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0d. structures, typedef$ cat 4-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}

mathieu@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-new_dog.c -o e
mathieu@ubuntu:~/0x0d. structures, typedef$ ./e
My name is Poppy, and I am 3.5 :) - Woof!
```
</details>

----------------------------------

#### [5. How Many Legs Does a Dog Have If You Call His Tail a Leg ? Four. Saying That a Tail Is a Leg Doesn't Make It a Leg](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0E-structures_typedef/5-free_dog.c)

Write a function that frees dogs.

 - Prototype: `void free_dog(dog_t *d);`
 
 <details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/0x0d. structures, typedef$ cat 5-main.c

#include <stdio.h>
#include "dog.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    free_dog(my_dog);
    return (0);
}

mathieu@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-free_dog.c 4-new_dog.c -o f
mathieu@ubuntu:~/0x0d. structures, typedef$ valgrind ./f
==22840== Memcheck, a memory error detector
==22840== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==22840== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==22840== Command: ./f
==22840== 
My name is Poppy, and I am 3.5 :) - Woof!
==22840== 
==22840== HEAP SUMMARY:
==22840==     in use at exit: 0 bytes in 0 blocks
==22840==   total heap usage: 4 allocs, 4 frees, 1,059 bytes allocated
==22840== 
==22840== All heap blocks were freed -- no leaks are possible
==22840== 
==22840== For counts of detected and suppressed errors, rerun with: -v
==22840== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
</details>

---------------------------------------

## Author

- Mathieu Morel
