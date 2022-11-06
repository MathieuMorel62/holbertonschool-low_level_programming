# C - MALLOC, FREE

![img](https://grandidierite.github.io/assets/img/dynamic.jpg)

## RESOURCES

### Read or Watch : 

- [Automatic And Dynamic Allocation, Malloc And Free](https://intranet.hbtn.io/concepts/891)

- [0x0a - Malloc & Free - Quick Overview.pdf](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221029%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221029T172309Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=7f18214d8789a4d16f1a67bb66e13e2b395e74f067771c7f588bbf1e22990c48)

- [Dynamic Memory Allocation In C - Malloc Calloc Realloc Free](https://www.youtube.com/watch?v=xDVC3wKjS64)

-----------------------------------

# TASKS

### [0. Float Like a Butterfly, Sting Like a Bee](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/malloc_free/0-create_array.c)

Write a function that creates an array of chars, and initializes it with a specific char.

 - Prototype: char *create_array(unsigned int size, char c);
 - Returns NULL if size = 0
 - Returns a pointer to the array, or NULL if it fails

---------------------------------------------

### [1. The Woman Who Has No Imagination Has No Wings](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/malloc_free/1-strdup.c)

Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

 - Prototype: char *_strdup(char *str);
 - The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
 - Returns NULL if str = NULL
 - On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.

----------------------------------

### [2. He Who Is Not Courageous Enough To Take Risks Will Accomplish Nothing In Life](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/malloc_free/2-str_concat.c)

Write a function that concatenates two strings.

 - Prototype: char *str_concat(char *s1, char *s2);
 - The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
 - if NULL is passed, treat it as an empty string
 - The function should return NULL on failure

---------------------------------------------------

### [3. If You Even Dream Of Beating Me You'd Better Wake Up And Apologize](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/malloc_free/3-alloc_grid.c)

Write a function that returns a pointer to a 2 dimensional array of integers.

 - Prototype: int **alloc_grid(int width, int height);
 - Each element of the grid should be initialized to 0
 - The function should return NULL on failure
 - If width or height is 0 or negative, return NULL

--------------------------------------------

### [4. It's Not Bragging If You Can Back It Up](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/malloc_free/4-free_grid.c)

Write a function that frees a 2 dimensional grid previously created by your alloc_grid function.

 - Prototype: void free_grid(int **grid, int height);
 - Note that we will compile with your alloc_grid.c file. Make sure it compiles.

----------------------------------------
