# C - DOUBLY LINKED LISTS

![img](https://lapmos.com//images/posts/Insertion%20and%20deletion%20in%20doubly%20linked%20list%20in%20C%20program.png)

## Resources
### Read or Watch :

- [What is a Doubly Linked List](https://www.youtube.com/watch?v=k0pjD12bzP0)

## General

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be interpreted/compiled on Ubuntu 20.04 LTS
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free`, `printf` and `exit`
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions should be included in your header file called [`lists.h`](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/lists.h)
- Don’t forget to push your header file
- All your header files should be include guarded

## More Info

Here is the structure used for the project

```
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

----------------------
# Tasks

#### [0. Print List](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/0-print_dlistint.c)

Write a function that prints all the elements of a `dlistint_t list`.

- Prototype: `size_t print_dlistint(const dlistint_t *h)`;
- Return: the number of nodes
- Format: see example

<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/Doubly linked lists$ cat 0-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = print_dlistint(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_dlistint.c -o a
julien@ubuntu:~/Doubly linked lists$ ./a 
9
8
-> 2 elements
julien@ubuntu:~/Doubly linked lists$
```
</details>
  
---------------------

#### [1. List Length](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/1-dlistint_len.c)

Write a function that returns the number of elements in a linked `dlistint_t list`.

- Prototype: `size_t dlistint_len(const dlistint_t *h)`;

<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/Doubly linked lists$ cat 1-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *new;
    dlistint_t hello = {8, NULL, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
    {
        dprintf(2, "Error: Can't malloc\n");
        return (EXIT_FAILURE);
    }
    new->n = 9;
    head->prev = new;
    new->next = head;
    new->prev = NULL;
    head = new;
    n = dlistint_len(head);
    printf("-> %lu elements\n", n);
    free(new);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-dlistint_len.c -o b
julien@ubuntu:~/Doubly linked lists$ ./b 
-> 2 elements
julien@ubuntu:~/Doubly linked lists$ 
```
</details>

-------------------------

#### [2. Add Node](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/2-add_dnodeint.c)

Write a function that adds a new node at the beginning of a `dlistint_t list`.

- Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n)`;
- Return: the address of the new element, or `NULL` if it failed

<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/Doubly linked lists$ cat 2-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint(&head, 0);
    add_dnodeint(&head, 1);
    add_dnodeint(&head, 2);
    add_dnodeint(&head, 3);
    add_dnodeint(&head, 4);
    add_dnodeint(&head, 98);
    add_dnodeint(&head, 402);
    add_dnodeint(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_dnodeint.c 0-print_dlistint.c -o c
julien@ubuntu:~/Doubly linked lists$ ./c 
1024
402
98
4
3
2
1
0
julien@ubuntu:~/Doubly linked lists$ 
```
</details>

-----------------------

#### [3. Add Node At The End](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/3-add_dnodeint_end.c)

Write a function that adds a new node at the end of a `dlistint_t list`.

- Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)`;
- Return: the address of the new element, or `NULL` if it failed

<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/Doubly linked lists$ cat 3-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_dnodeint_end.c 0-print_dlistint.c -o d
julien@ubuntu:~/Doubly linked lists$ ./d 
0
1
2
3
4
98
402
1024
julien@ubuntu:~/Doubly linked lists$ 
```
</details>
  
---------------------

#### [4. Free List](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/4-free_dlistint.c)

Write a function that frees a `dlistint_t list`.

- Prototype: `void free_dlistint(dlistint_t *head)`;
    
<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/Doubly linked lists$ cat 4-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c -o e
julien@ubuntu:~/Doubly linked lists$ valgrind ./e 
==4197== Memcheck, a memory error detector
==4197== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==4197== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==4197== Command: ./e
==4197== 
0
1
2
3
4
98
402
1024
==4197== 
==4197== HEAP SUMMARY:
==4197==     in use at exit: 0 bytes in 0 blocks
==4197==   total heap usage: 9 allocs, 9 frees, 1,216 bytes allocated
==4197== 
==4197== All heap blocks were freed -- no leaks are possible
==4197== 
==4197== For counts of detected and suppressed errors, rerun with: -v
==4197== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
julien@ubuntu:~/Doubly linked lists$ 
```
</details>

----------------------

#### [5. Get Node At Index](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/5-get_dnodeint.c)
    
Write a function that returns the nth node of a `dlistint_t` linked list.

- Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)`;
- where index is the `index` of the node, starting from `0`
- if the node does not exist, return `NULL`

<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/Doubly linked lists$ cat 5-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    dlistint_t *node;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    node = get_dnodeint_at_index(head, 5);
    printf("%d\n", node->n);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c -o h
julien@ubuntu:~/Doubly linked lists$ ./h
0
1
2
3
4
98
402
1024
98
julien@ubuntu:~/Doubly linked lists$
```
</details>
    
---------------------

#### [6. Sum List](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/6-sum_dlistint.c)

Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

- Prototype: `int sum_dlistint(dlistint_t *head)`;
- if the list is empty, return `0`

<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/Doubly linked lists$ cat 6-main.c 
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;
    int sum;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    sum = sum_dlistint(head);
    printf("sum = %d\n", sum);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra 6-main.c -std=gnu89 3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c -o i
julien@ubuntu:~/Doubly linked lists$ ./i 
sum = 1534
julien@ubuntu:~/Doubly linked lists$ 
```
</details>

-------------------------

#### [7. Insert At Index](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/7-insert_dnodeint.c)

Write a function that inserts a new node at a given position.

- Prototype: `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)`;
- where `idx` is the index of the list where the new node should be added. Index starts at `0`
- Returns: the address of the new node, or `NULL` if it failed
- if it is not possible to add the new node at index `idx`, do not add the new node and return `NULL`

Your files `2-add_dnodeint.c` and `3-add_dnodeint_end.c` will be compiled during the correction

<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/Doubly linked lists$ cat 7-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 2-add_dnodeint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 7-insert_dnodeint.c -o j
julien@ubuntu:~/Doubly linked lists$ ./j 
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
4096
98
402
1024
julien@ubuntu:~/Doubly linked lists$
```
</details>

--------------------

#### [8. Delete At Index](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/doubly_linked_lists/8-delete_dnodeint.c)

Write a function that deletes the node at index `index` of a `dlistint_t` linked list.

- Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)`;
- where `index` is the index of the node that should be deleted. Index starts at `0`
- Returns: `1` if it succeeded, `-1` if it failed
    
<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/Doubly linked lists$ cat 8-main.c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 5);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    printf("-----------------\n");
    delete_dnodeint_at_index(&head, 0);
    print_dlistint(head);
    return (0);
}
julien@ubuntu:~/Doubly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 8-delete_dnodeint.c -o k
julien@ubuntu:~/Doubly linked lists$ ./k
0
1
2
3
4
98
402
1024
-----------------
0
1
2
3
4
402
1024
-----------------
1
2
3
4
402
1024
-----------------
2
3
4
402
1024
-----------------
3
4
402
1024
-----------------
4
402
1024
-----------------
402
1024
-----------------
1024
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
-----------------
julien@ubuntu:~/Doubly linked lists$
```
</details>

-------------------------
    

#### [9. Crackme4](url)

Find the password for [`crackme4`](https://github.com/hs-hq/0x17.c).

- Save the password in the file `100-password`
- Your file should contain the exact password, no new line, no extra space
- Hint: The program prints “OK” when the password is correct
    
---------------------
    
#### [10. Palindromes](url)

A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is `9009 = 91 × 99`.

Find the largest palindrome made from the product of two 3-digit numbers.

- Save the result in the file `102-result`
- Your file should contain the exact result, no new line, no extra space

------------------

#### [11. Crackme5](url)
    
Write a keygen for [`crackme5`](https://github.com/hs-hq/0x17.c).

- Usage of the crackme: `./crackme5 username key`
- The crackme will segfault if you do not enter the correct key for the user
- Usage for your keygen: `./keygen5 username`
- Your keygen should print a valid key for the `username`
    
<details>
<summary>File Compilation / test</summary>
<br>

```
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-keygen.c -o keygen5
julien@ubuntu:~/$ ./crackme5 julien javascript
Segmentation fault (core dumped)
julien@ubuntu:~/$ ./crackme5 julien `./keygen5 julien`
Congrats!
julien@ubuntu:~/$ 
```
</details>
    
----------------------------------
## AUTHOR
- Mathieu Morel
