# <p align=center>C - HASH TABLES</p>

<img src="https://i.ytimg.com/vi/2Ti5yvumFTU/maxresdefault.jpg" width="100%">

## Description
### Hash Tables in C

Hash tables are a type of data structure that allow for efficient storage and retrieval of data, using a hash function to map keys to indices in an array.

### Defining a Hash Table

To define a hash table, you can create an array of pointers to linked lists, where each linked list represents a "bucket" of data with the same hash value:

```c++
#define SIZE 10
struct Node* table[SIZE];
```

This creates an array of `SIZE` pointers to `Node` structs, which will serve as the buckets for the hash table.

### Hash Function

The hash function takes a key as input and returns an index in the array:

```c++
int hash(int key) {
  return key % SIZE;
}
```

This hash function takes an `int` key as input and returns the remainder of its division by `SIZE`. This simple hash function can result in collisions, which occur when multiple keys map to the same index in the array.

### Adding Data

To add data to the hash table, you can use the following code:

```c++
int key = 42;
int index = hash(key);
struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
newNode->key = key;
newNode->next = table[index];
table[index] = newNode;
```

This creates a new node with the given key, computes the index in the array using the hash function, and adds the node to the linked list at that index.

### Retrieving Data

To retrieve data from the hash table, you can use the following code:

```c++
int key = 42;
int index = hash(key);
struct Node* temp = table[index];
while (temp != NULL) {
  if (temp->key == key) {
    return temp->data;
  }
  temp = temp->next;
}
```

This computes the index in the array using the hash function, and searches the linked list at that index for a node with the given key. If a node is found, its data is returned; otherwise, the search fails.
  
Hash tables offer an efficient way to store and retrieve data based on keys, with an average time complexity of O(1). However, the performance of hash tables can be affected by collisions and the choice of hash function.

## Resources
### Read or Watch :
- [What Is a HashTable Data Structure - Introduction To Hash Tables , Part 0**](https://www.youtube.com/watch?v=MfhjkfocRR0)
- [Hash Function](https://en.wikipedia.org/wiki/Hash_function)
- [Hash Table](https://en.wikipedia.org/wiki/Hash_table)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called [hash_tables.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x17-hash_tables/hash_tables.h)
- Don’t forget to push your header file
- All your header files should be include guarded

## Data Structures
Here is the structure used for the project

```c++
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
     char *key;
     char *value;
     struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
     unsigned long int size;
     hash_node_t **array;
} hash_table_t;
```

## Python Dictionaries

Python dictionaries are implemented using hash tables. When you will be done with this project, you will be able to better understand the power and simplicity of Python dictionaries. So much is actually happening when you type `d = {'a': 1, 'b': 2}`, but everything looks so simple for the user. Python doesn’t use the exact same implementation than the one you will work on today though. If you are curious on how it works under the hood, here is a good blog post about [how dictionaries are implemented in Python 2.7](https://intranet.hbtn.io/rltoken/XFzuh88rCD5uHeJ6wAjRBA) (not mandatory).

Note that all dictionaries are not implemented using hash tables and there is a difference between a dictionary and a hash table. [Read more here](https://intranet.hbtn.io/rltoken/jyBuNL75AlTZwJLGcsv2qQ) (not mandatory).

---------------------

# Tasks

#### [0. >>> ht = {}](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x17-hash_tables/0-hash_table_create.c)

Write a function that creates a hash table.

- Prototype: `hash_table_t *hash_table_create(unsigned long int size)`;
  - where size is the `size` of the array
- Returns a pointer to the newly created hash table
- If something went wrong, your function should return `NULL`

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/Hash tables$ cat 0-main.c 

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}

mathieu@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-hash_table_create.c -o a
mathieu@ubuntu:~/Hash tables$ ./a 
0x238a010

mathieu@ubuntu:~/Hash tables$ valgrind ./a
==7602== Memcheck, a memory error detector
==7602== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==7602== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==7602== Command: ./a
==7602== 
0x51fc040
==7602== 
==7602== HEAP SUMMARY:
==7602==     in use at exit: 8,208 bytes in 2 blocks
==7602==   total heap usage: 2 allocs, 0 frees, 8,208 bytes allocated
==7602== 
==7602== LEAK SUMMARY:
==7602==    definitely lost: 16 bytes in 1 blocks
==7602==    indirectly lost: 8,192 bytes in 1 blocks
==7602==      possibly lost: 0 bytes in 0 blocks
==7602==    still reachable: 0 bytes in 0 blocks
==7602==         suppressed: 0 bytes in 0 blocks
==7602== Rerun with --leak-check=full to see details of leaked memory
==7602== 
==7602== For counts of detected and suppressed errors, rerun with: -v
==7602== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
</details>

--------------------

#### [1. Djb2](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x17-hash_tables/1-djb2.c)

Write a hash function implementing the djb2 algorithm.

- Prototype: `unsigned long int hash_djb2(const unsigned char *str)`;
- You are allowed to copy and paste the function from [this page](https://gist.github.com/papamuziko/7bb52dfbb859fdffc4bd0f95b76f71e8)

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/Hash tables$ cat 1-djb2.c

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}

mathieu@ubuntu:~/Hash tables$ 
mathieu@ubuntu:~/Hash tables$ cat 1-main.c 

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}

mathieu@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-djb2.c -o b
mathieu@ubuntu:~/Hash tables$ ./b 
6953392314605
3749890792216096085
5861846
```
</details>

------------------

#### [2. Key -> Index](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x17-hash_tables/2-key_index.c)

Write a function that gives you the index of a key.

- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size)`;
  - where key is the `key`
  - and `size` is the size of the array of the hash table
- This function should use the `hash_djb2` function that you wrote earlier
- Returns the index at which the key/value pair should be stored in the array of the hash table
- You will have to use this hash function for all the next tasks

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/Hash tables$ cat 2-main.c 

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}

mathieu@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 1-djb2.c 2-key_index.c -o c
mathieu@ubuntu:~/Hash tables$ ./c 
6953392314605
237
3749890792216096085
341
5861846
470
```
</details>

---------------------

#### [3. >>> ht['Betty'] = 'Cool'](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x17-hash_tables/3-hash_table_set.c)

Write a function that adds an element to the hash table.

- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value)`;
  - Where `ht` is the hash table you want to add or update the key/value to
  - `key` is the key. `key` can not be an empty string
  - and `value` is the value associated with the key. `value` must be duplicated. `value` can be an empty string
- Returns: `1` if it succeeded, `0` otherwise
- In case of collision, add the new node at the beginning of the list

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/Hash tables$ cat 3-main.c 

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}

mathieu@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c -o d
```
</details>

If you want to test for collisions, here are some strings that collide using the djb2 algorithm:

- **hetairas** collides with **mentioner**
- **heliotropes** collides with **neurospora**
- **depravement** collides with **serafins**
- **stylist** collides with **subgenera**
- **joyful** collides with **synaphea**
- **redescribed** collides with **urites**
- **dram** collides with **vivency**

------------------------

#### [4. >>> ht['Betty']](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x17-hash_tables/4-hash_table_get.c)

Write a function that retrieves a value associated with a key.

- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key)`;
  - where `ht` is the hash table you want to look into
  - and `key` is the key you are looking for
- Returns the value associated with the element, or `NULL` if `key` couldn’t be found
  
<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/Hash tables$ cat 4-main.c 

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_set(ht, "c", "isfun");

    value = hash_table_get(ht, "python");
    printf("%s:%s\n", "python", value);
    value = hash_table_get(ht, "Bob");
    printf("%s:%s\n", "Bob", value);
    value = hash_table_get(ht, "N");
    printf("%s:%s\n", "N", value);
    value = hash_table_get(ht, "Asterix");
    printf("%s:%s\n", "Asterix", value);
    value = hash_table_get(ht, "Betty");
    printf("%s:%s\n", "Betty", value);
    value = hash_table_get(ht, "98");
    printf("%s:%s\n", "98", value);
    value = hash_table_get(ht, "c");
    printf("%s:%s\n", "c", value);
    value = hash_table_get(ht, "javascript");
    printf("%s:%s\n", "javascript", value);
    return (EXIT_SUCCESS);
}

mathieu@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c -o e
mathieu@ubuntu:~/Hash tables$ ./e 
python:awesome
Bob:and Kris love asm
N:queens
Asterix:Obelix
Betty:Cool
98:Battery Street
c:isfun
javascript:(null)
```
</details>
  
---------------------

#### [5. >>> Print(ht)](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x17-hash_tables/5-hash_table_print.c)
  
Write a function that prints a hash table.

- Prototype: `void hash_table_print(const hash_table_t *ht)`;
  - where `ht` is the hash table
- You should print the key/value in the order that they appear in the array of hash table
  - Order: array, list
- Format: see example
- If `ht` is NULL, don’t print anything

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/Hash tables$ cat 5-main.c 

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}

mathieu@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c -o f
mathieu@ubuntu:~/Hash tables$ ./f 
{}
{'Betty': 'Cool', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Asterix': 'Obelix'}
```
</details>

---------------------------------

#### [6. >>> Del ht](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x17-hash_tables/6-hash_table_delete.c)

Write a function that deletes a hash table.

- Prototype: `void hash_table_delete(hash_table_t *ht)`;
  - where `ht` is the hash table

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/Hash tables$ cat 6-main.c 

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Streetz");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    hash_table_set(ht, "98", "Battery Street"); 
    hash_table_set(ht, "hetairas", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z");
    hash_table_set(ht, "mentioner", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}

mathieu@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra 6-main.c 0-hash_table_create.c 1-djb2.c 2-key_index.c 3-hash_table_set.c 4-hash_table_get.c 5-hash_table_print.c 6-hash_table_delete.c -o g
mathieu@ubuntu:~/Hash tables$ valgrind ./g
==6621== Memcheck, a memory error detector
==6621== Copyright (C) 2002-2013, and GNU GPL'd, by Julian Seward et al.
==6621== Using Valgrind-3.10.1 and LibVEX; rerun with -h for copyright info
==6621== Command: ./g
==6621== 
{'Betty': 'Cool', 'mentioner': 'Bob', 'hetairas': 'Bob Z Chu', 'python': 'awesome', 'Bob': 'and Kris love asm', '98': 'Battery Street', 'N': 'queens', 'c': 'fun', 'Tim': 'Britton', 'Asterix': 'Obelix'}
==6621== 
==6621== HEAP SUMMARY:
==6621==     in use at exit: 0 bytes in 0 blocks
==6621==   total heap usage: 37 allocs, 37 frees, 8,646 bytes allocated
==6621== 
==6621== All heap blocks were freed -- no leaks are possible
==6621== 
==6621== For counts of detected and suppressed errors, rerun with: -v
==6621== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
```
</details>
  
---------------------------

#### [7. $ht['Betty'] = 'Cool'](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x17-hash_tables/100-sorted_hash_table.c

In [PHP](https://www.php.net/manual/en/intro-whatis.php), hash tables are ordered. Wait… WAT? How is this even possible?
  
**Before you continue**, please take a moment to think about it: how you would implement it if you were asked to during an interview or a job. What data structures would you use? How would it work?
  
For this task, please:

- Read [PHP Internals Book: HashTable](https://www.phpinternalsbook.com/php5/hashtables/basic_structure.html)
- Use the same hash function
- Use these data structures :

```c++
/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
```

Rewrite the previous functions using these data structures :

- `shash_table_t *shash_table_create(unsigned long int size)`;
- `int shash_table_set(shash_table_t *ht, const char *key, const char *value)`;
  - The key/value pair should be inserted in the sorted list at the right place
  - Note that here we do not want to do exactly like `PHP`: we want to create a sorted linked list, by key (sorted on ASCII value), that we can print by traversing it. See example.
- `char *shash_table_get(const shash_table_t *ht, const char *key)`;
- `void shash_table_print(const shash_table_t *ht)`;
  - Should print the hash table using the sorted linked list
- `void shash_table_print_rev(const shash_table_t *ht)`;
  - Should print the hash tables key/value pairs in reverse order using the sorted linked list
- `void shash_table_delete(shash_table_t *ht)`;
- You are allowed to have more than 5 functions in your file

<details>
<summary>Test File</summary>
<br>

```c++
mathieu@ubuntu:~/Hash tables$ cat 100-main.c 

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "j", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "n", "5");
    shash_table_print(ht);
    shash_table_set(ht, "a", "6");
    shash_table_print(ht);
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);
    shash_table_print_rev(ht);
        shash_table_delete(ht);
    return (EXIT_SUCCESS);
}

mathieu@ubuntu:~/Hash tables$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-sorted_hash_table.c 1-djb2.c 2-key_index.c -o sht    
mathieu@ubuntu:~/Hash tables$ ./sht 
{'y': '0'}
{'j': '1', 'y': '0'}
{'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0'}
{'b': '3', 'c': '2', 'j': '1', 'y': '0', 'z': '4'}
{'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'n': '5', 'y': '0', 'z': '4'}
{'a': '6', 'b': '3', 'c': '2', 'j': '1', 'm': '7', 'n': '5', 'y': '0', 'z': '4'}
{'z': '4', 'y': '0', 'n': '5', 'm': '7', 'j': '1', 'c': '2', 'b': '3', 'a': '6'}
```
</details>

-----------------------

## AUTHOR

- Mathieu Morel
