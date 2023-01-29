# C - SINGLY LINKED LISTS

<img src="https://miro.medium.com/max/953/1*elJncKhH_P9oQglfI1aVQA.png" width="100%">

## Description
### Singly Linked Lists in C

Singly linked lists are a commonly used data structure in programming. This data structure consists of a series of nodes that contain data and a link to the next node in the list.  
  
Here is an example of the data structure for a singly linked list in C:

```c
struct Node {
    int data;
    struct Node* next;
};
```

The `data` variable contains the data stored in that node, while `next` is a pointer to the next node in the list.   
   
To create a new singly linked list, you can use the following function:

```c
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
```

This function creates a new node, assigns the given value to the `data` variable, and sets `next` to `NULL` (which indicates that it is the last node in the list).  
   
To add a new node to the list, you can use the following function:

```c
void addNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
```

This function creates a new node using the `createNode()` function, updates the `next` link to point to the previous head node, and updates the head of the list to point to the new node.  
   
There are many other common operations that can be performed on singly linked lists, such as deleting nodes, searching for nodes, and traversing the list.  
   
Singly linked lists are often used for performance needs such as handling large amounts of data or frequent insert/delete operations.  

## Resources
### Read or Watch:
- [Data Structures](https://intranet.hbtn.io/concepts/889)
- [Linked Lists](https://intranet.hbtn.io/rltoken/cg9u72K8oC40BifREzmx0g)
- [Google](https://intranet.hbtn.io/rltoken/cOmrDflypepm1-sgGIXjNA)
- [Youtube](https://intranet.hbtn.io/rltoken/6CP1oqEpl5hd1j18fusEEQ)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The only C standard library functions allowed are `malloc`, `free` and exit. Any use of functions like `printf`, `puts`, `calloc`, `realloc` etc… is forbidden
- You are allowed to use [_putchar](https://github.com/hs-hq/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [lists.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/lists.h)
- Don’t forget to push your header file
- All your header files should be include guarded

## More Info

Please use this data structure for this project:

```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
   
----------------------
# TASKS

#### [0. Print List](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/0-print_list.c)

Write a function that prints all the elements of a `list_t` list.

- Prototype: `size_t print_list(const list_t *h);`
- Return: the number of nodes
- If `str` is `NULL`, print `[0] (nil)`
- You are allowed to use `printf`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/Singly linked lists$ cat 0-main.c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    printf("\n");
    free(new->str);
    new->str = NULL;
    n = print_list(head);
    printf("-> %lu elements\n", n);

    free(new);
    return (0);
}

mathieu@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_list.c -o a
mathieu@ubuntu:~/Singly linked lists$ ./a 
[5] Hello
[5] World
-> 2 elements

[0] (nil)
[5] World
-> 2 elements
```
</details>

---------------------

#### [1. List Length](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/1-list_len.c)

Write a function that returns the number of elements in a linked `list_t` list.

- Prototype: `size_t list_len(const list_t *h);`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/Singly linked lists$ cat 1-main.c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;
    list_t *new;
    list_t hello = {"World", 5, NULL};
    size_t n;

    head = &hello;
    new = malloc(sizeof(list_t));
    if (new == NULL)
    {
        printf("Error\n");
        return (1);
    }
    new->str = strdup("Hello");
    new->len = 5;
    new->next = head;
    head = new;
    n = list_len(head);
    printf("-> %lu elements\n", n);
    free(new->str);
    free(new);
    return (0);
}

mathieu@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-list_len.c -o b
mathieu@ubuntu:~/Singly linked lists$ ./b 
-> 2 elements
```
</details>

---------------------

#### [2. Add Node](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/2-add_node.c)

Write a function that adds a new node at the beginning of a `list_t` list.

- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/Singly linked lists$ cat 2-main.c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node(&head, "Alexandro");
    add_node(&head, "Asaia");
    add_node(&head, "Augustin");
    add_node(&head, "Bennett");
    add_node(&head, "Bilal");
    add_node(&head, "Chandler");
    add_node(&head, "Damian");
    add_node(&head, "Daniel");
    add_node(&head, "Dora");
    add_node(&head, "Electra");
    add_node(&head, "Gloria");
    add_node(&head, "Joe");
    add_node(&head, "John");
    add_node(&head, "John");
    add_node(&head, "Josquin");
    add_node(&head, "Kris");
    add_node(&head, "Marine");
    add_node(&head, "Mason");
    add_node(&head, "Praylin");
    add_node(&head, "Rick");
    add_node(&head, "Rick");
    add_node(&head, "Rona");
    add_node(&head, "Siphan");
    add_node(&head, "Sravanthi");
    add_node(&head, "Steven");
    add_node(&head, "Tasneem");
    add_node(&head, "William");
    add_node(&head, "Zee");
    print_list(head);
    return (0);
}

mathieu@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-add_node.c 0-print_list.c -o c
mathieu@ubuntu:~/Singly linked lists$ ./c 
[3] Zee
[7] William
[7] Tasneem
[6] Steven
[9] Sravanthi
[6] Siphan
[4] Rona
[4] Rick
[4] Rick
[7] Praylin
[5] Mason
[6] Marine
[4] Kris
[7] Josquin
[4] John
[4] John
[3] Joe
[6] Gloria
[7] Electra
[4] Dora
[6] Daniel
[6] Damian
[8] Chandler
[5] Bilal
[7] Bennett
[8] Augustin
[5] Asaia
[9] Alexandro
```
</details>

--------------------

#### [3. Add Node At The End](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/3-add_node_end.c)

Write a function that adds a new node at the end of a list_t list.

- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/Singly linked lists$ cat 3-main.c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Anne");
    add_node_end(&head, "Colton");
    add_node_end(&head, "Corbin");
    add_node_end(&head, "Daniel");
    add_node_end(&head, "Danton");
    add_node_end(&head, "David");
    add_node_end(&head, "Gary");
    add_node_end(&head, "Holden");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Ian");
    add_node_end(&head, "Jay");
    add_node_end(&head, "Jennie");
    add_node_end(&head, "Jimmy");
    add_node_end(&head, "Justin");
    add_node_end(&head, "Kalson");
    add_node_end(&head, "Kina");
    add_node_end(&head, "Matthew");
    add_node_end(&head, "Max");
    add_node_end(&head, "Michael");
    add_node_end(&head, "Ntuj");
    add_node_end(&head, "Philip");
    add_node_end(&head, "Richard");
    add_node_end(&head, "Samantha");
    add_node_end(&head, "Stuart");
    add_node_end(&head, "Swati");
    add_node_end(&head, "Timothy");
    add_node_end(&head, "Victor");
    add_node_end(&head, "Walton");
    print_list(head);
    return (0);
}

mathieu@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-add_node_end.c 0-print_list.c -o d
mathieu@ubuntu:~/Singly linked lists$ ./d 
[4] Anne
[6] Colton
[6] Corbin
[6] Daniel
[6] Danton
[5] David
[4] Gary
[6] Holden
[3] Ian
[3] Ian
[3] Jay
[6] Jennie
[5] Jimmy
[6] Justin
[6] Kalson
[4] Kina
[7] Matthew
[3] Max
[7] Michael
[4] Ntuj
[6] Philip
[7] Richard
[8] Samantha
[6] Stuart
[5] Swati
[7] Timothy
[6] Victor
[6] Walton
```
</details>

-----------------------

#### [4. Free List](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/4-free_list.c)

Write a function that frees a `list_t` list.

- Prototype: `void free_list(list_t *head);`

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/Singly linked lists$ cat 4-main.c

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}

mathieu@ubuntu:~/Singly linked lists$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-free_list.c 3-add_node_end.c 0-print_list.c -o e
mathieu@ubuntu:~/Singly linked lists$ valgrind ./e
==3598== Memcheck, a memory error detector
==3598== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
==3598== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
==3598== Command: ./e
==3598== 
[6] Bob
[1] &
[3] Kris
[4] love
[3] asm
==3598== 
==3598== HEAP SUMMARY:
==3598==     in use at exit: 0 bytes in 0 blocks
==3598==   total heap usage: 11 allocs, 11 frees, 1,166 bytes allocated
==3598== 
==3598== All heap blocks were freed -- no leaks are possible
==3598== 
==3598== For counts of detected and suppressed errors, rerun with: -v
==3598== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
</details>

------------------------

#### [5. The Hare And The Tortoise](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x12-singly_linked_lists/100-first.c)

Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.

- You are allowed to use the `printf` function

<details>
<summary>File Test</summary>
<br>

```c++
mathieu@ubuntu:~/Singly linked lists$ cat 100-main.c

#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    printf("(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)\n");
    return (0);
}

mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-first.c -o first
mathieu@ubuntu:~/$ ./first
You're beat! and yet, you must allow,
I bore my house upon my back!
(A tortoise, having pretty good sense of a hare's nature, challenges one to a race.)
```
</details>

-----------------------

## Author

- Mathieu Morel