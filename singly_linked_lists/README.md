# C - SINGLY LINKED LISTS

![img](https://miro.medium.com/max/953/1*elJncKhH_P9oQglfI1aVQA.png)

## RESOURCES

### Read or watch:
- [Data Structures](https://intranet.hbtn.io/concepts/889)
- [Linked Lists](https://intranet.hbtn.io/rltoken/cg9u72K8oC40BifREzmx0g)
- [Google](https://intranet.hbtn.io/rltoken/cOmrDflypepm1-sgGIXjNA)
- [Youtube](https://intranet.hbtn.io/rltoken/6CP1oqEpl5hd1j18fusEEQ)

### INFO

Please use this data structure for this project:

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
   
----------------------
# TASKS

#### [0. Print List](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/singly_linked_lists/0-print_list.c)

Write a function that prints all the elements of a `list_t` list.

- Prototype: `size_t print_list(const list_t *h);`
- Return: the number of nodes
- If `str` is `NULL`, print `[0] (nil)`
- You are allowed to use `printf`

---------------------

#### [1. List Length](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/singly_linked_lists/1-list_len.c)

Write a function that returns the number of elements in a linked `list_t` list.

- Prototype: `size_t list_len(const list_t *h);`

---------------------

#### [2. Add Node](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/singly_linked_lists/2-add_node.c)

Write a function that adds a new node at the beginning of a `list_t` list.

- Prototype: `list_t *add_node(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

--------------------

#### [3. Add Node At The End](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/singly_linked_lists/3-add_node_end.c)

Write a function that adds a new node at the end of a list_t list.

- Prototype: `list_t *add_node_end(list_t **head, const char *str);`
- Return: the address of the new element, or `NULL` if it failed
- `str` needs to be duplicated
- You are allowed to use `strdup`

-----------------------

#### [4. Free List](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/singly_linked_lists/4-free_list.c)

Write a function that frees a `list_t` list.

- Prototype: `void free_list(list_t *head);`

------------------------

#### [5. The Hare And The Tortoise](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/singly_linked_lists/100-first.c)

Write a function that prints `You're beat! and yet, you must allow,\nI bore my house upon my back!\n` before the `main` function is executed.

- You are allowed to use the `printf` function

-----------------------
