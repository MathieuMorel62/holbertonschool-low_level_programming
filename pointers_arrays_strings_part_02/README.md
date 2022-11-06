# C - MORE POINTERS, ARRAYS AND STRINGS PART 02

![img](https://cdn.educba.com/academy/wp-content/uploads/2020/03/Function-Pointer-in-C.jpg)

--------------------------

# TASKS

### [0. Strcat](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings_part_02/0-strcat.c)

Write a function that concatenates two strings.

 - Prototype: char *_strcat(char *dest, char *src);
 - This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
 - Returns a pointer to the resulting string dest

FYI: The standard library provides a similar function: strcat. Run man strcat to learn more.

------------------------------

### [1. Strncat](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings_part_02/1-strncat.c)

Write a function that concatenates two strings.

 - Prototype: char *_strncat(char *dest, char *src, int n);
 - The _strncat function is similar to the _strcat function, except that
   - it will use at most n bytes from src; and
   - src does not need to be null-terminated if it contains n or more bytes
 - Return a pointer to the resulting string dest

FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

--------------------------------------

### [2. Strncpy](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings_part_02/2-strncpy.c)

Write a function that copies a string.

 - Prototype: char *_strncpy(char *dest, char *src, int n);
 - Your function should work exactly like strncpy

FYI: The standard library provides a similar function: strncpy. Run man strncpy to learn more.

-------------------------------------

### [3. Strcmp](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings_part_02/3-strcmp.c)

Write a function that compares two strings.

 - Prototype: int _strcmp(char *s1, char *s2);
 - Your function should work exactly like strcmp

FYI: The standard library provides a similar function: strcmp. Run man strcmp to learn more.

------------------------------------

### [4. I Am a Kind Of Paranoid In Reverse. I Suspect People Of Plotting To Make Me Happy](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings_part_02/4-rev_array.c)

Write a function that reverses the content of an array of integers.

 - Prototype: void reverse_array(int *a, int n);
 - Where n is the number of elements of the array

-----------------------------------

### [5. Always Looks Up](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings_part_02/5-string_toupper.c)

Write a function that changes all lowercase letters of a string to uppercase.

 - Prototype: char *string_toupper(char *);

--------------------------------------

### [6. Expect The Best. Prepare For The Worst. Capitalize On What Comes](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings_part_02/6-cap_string.c)

Write a function that capitalizes all words of a string.

 - Prototype: char *cap_string(char *);
 - Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }

---------------------------------------

### [7. Mozart Composed His Music Not For The Elite, But For Everybody](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/pointers_arrays_strings_part_02/7-leet.c)

Write a function that encodes a string into [1337.](https://intranet.hbtn.io/rltoken/UkxNyYU117IdftA9XxsVyQ)

 - Letters a and A should be replaced by 4
 - Letters e and E should be replaced by 3
 - Letters o and O should be replaced by 0
 - Letters t and T should be replaced by 7
 - Letters l and L should be replaced by 1
 - Prototype: char *leet(char *);
 - You can only use one if in your code
 - You can only use two loops in your code
 - You are not allowed to use switch
 - You are not allowed to use any ternary operation

------------------------------------
