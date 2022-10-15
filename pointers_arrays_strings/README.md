# C - POINTERS, ARRAYS AND STRINGS

![img](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/216/IMG_2410.JPG)

### CONCEPTS

For this project, we expect you to look at these concepts :

- [Pointers and arrays](https://intranet.hbtn.io/concepts/888)

- [Data Structures](https://intranet.hbtn.io/concepts/889)

### RESOURCES

#### Read or watch :

- [C - Arrays](https://intranet.hbtn.io/rltoken/1PQnbj1BHB7w_mKhxhMWdg)
- 
- [C - Pointers](https://intranet.hbtn.io/rltoken/G2_eTEuCaSAXfKYuEteXfQ)

- [C - Strings](https://intranet.hbtn.io/rltoken/N7AFmcH2JyKF35ly2RH1Uw)

- [Memory Layout](https://intranet.hbtn.io/rltoken/6MlL0ucmD6kNwXANZFZJEg)

----------------------------

# TASKS

### [0. 98 BATTERY ST.](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/0-reset_to_98.c)

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

  - Prototype: void reset_to_98(int *n);

----------------------------------

### [1. DON'T SWAP HORSES IN. CROSSING A STREAM](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/1-swap.c)

Write a function that swaps the values of two integers.

  - Prototype: void swap_int(int *a, int *b);

----------------------------

### [2. THIS REPORT, BY ITS VERY LENGTH, DEFENDS ITSELF AGAINST THE RISK OF BEING READ](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/2-strlen.c)

Write a function that returns the length of a string.

  - Prototype: int _strlen(char *s);

FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

----------------------

### [3. I DO NOT FEAR COMPUTERS. I FEAR THE LACK OF THEM](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/3-puts.c)

Write a function that prints a string, followed by a new line, to stdout.

  - Prototype: void _puts(char *str);

FYI: The standard library provides a similar function: puts. Run man puts to learn more.

-----------------------------

### [4. I CAN ONLY GO ONE WAY. I'VE NOT GOT A REVERSE GEAR](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/4-print_rev.c)

Write a function that prints a string, in reverse, followed by a new line.

  - Prototype: void print_rev(char *s);

----------------------------

### [5. A GOOD ENGINEER THINKS IN REVERSE AND ASKS HIMSELF ABOUT THE STYLISTIC CONSEQUENCES OF THE COMPONENTS AND SYSTEMS HE PROPOSES](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/5-rev_string.c)

Write a function that reverses a string.

 - Prototype: void rev_string(char *s);

--------------------------------------

### [6. HALF THE LIES THEY TELL ABOUT ME AREN'T TRUE](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/6-puts2.c)

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

 - Prototype: void puts2(char *str);

--------------------------------

### [7. WINNING IS ONLY HALF OF IT. HAVING FUN IS THE OTHER HALF](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/7-puts_half.c)

Write a function that prints half of a string, followed by a new line.

 - Prototype: void puts_half(char *str);

 - The function should print the second half of the string

 - If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

------------------------------------------

### [8. ARRAYS ARE NOT POINTERS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/8-print_array.c)

Write a function that prints n elements of an array of integers, followed by a new line.

 - Prototype: void print_array(int *a, int n);

 - where n is the number of elements of the array to be printed

 - Numbers must be separated by comma, followed by a space

 - The numbers should be displayed in the same order as they are stored in the array

 - You are allowed to use printf

-----------------------------------

### [9. STRCPY](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings/9-strcpy.c)

 - Prototype: char *_strcpy(char *dest, char *src);

Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

 - Return value: the pointer to dest

FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.
