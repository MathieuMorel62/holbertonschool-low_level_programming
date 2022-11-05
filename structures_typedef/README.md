# C - STRUCTURES, TYPEDEF

![img](https://i.ytimg.com/vi/LGTfV6NINmo/maxresdefault.jpg)

## RESOURCES

### Read or watch :

- [0x0d. Structures.pdf](https://holbertonintranet.s3.amazonaws.com/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOU5BHMTQX4%2F20221105%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221105T121658Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=390d6d8ed1866baa64876e8d110b656242001f3f9e292ac58251ac93848be985)

- [Struct (C Programming Language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))

- [Documentation: Structures](https://intranet.hbtn.io/rltoken/NuojX9XdNuRRcflJ64CSLQ)

- [0x0d. Typedef And Structures.pdf](https://intranet.hbtn.io/rltoken/NjiS7w3I0aOysFzTISENUA)

- [Typedef](https://intranet.hbtn.io/rltoken/6TX-aFGQs5sAtdtyXBnjyQ)

- Programming In C By Stephen Kochan - Chapter 8, Working With Structures p163-189

- [The Lost Art of C Structure Packing (Advanced - not mandatory)](https://intranet.hbtn.io/rltoken/qxIHARCFIPU4IGX12WVa0g)

-----------------------------------------

# TASKS

### [0. Poppy](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/structures_typedef/dog.h)

Define a new type struct dog with the following elements:

 - name, type = char *
 - age, type = float
 - owner, type = char *

-------------------------------------

### [1. A Dog Is The Only Thing On Earth That Loves You More Than You Love Yourself](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/structures_typedef/1-init_dog.c)

Write a function that initialize a variable of type struct dog

 - Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

-------------------------------

### [2. A Dog Will Teach You Unconditional Love. If You Can Have That In Your Life, Things Won't Be Too Bad](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/structures_typedef/2-print_dog.c)

Write a function that prints a struct dog

 - Prototype: void print_dog(struct dog *d);
 - Format: see example bellow
 - You are allowed to use the standard library
 - If an element of d is NULL, print (nil) instead of this element. (if name is NULL, print Name: (nil))
 - If d is NULL print nothing.

_________________________________

### [3. Outside Of a Dog, a Book Is a Man's Best Friend. Inside Of a Dog It's Too Dark To Read](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/structures_typedef/dog.h)

Define a new type dog_t as a new name for the type struct dog.

-----------------------------

### [4. A Door Is What a Dog Is Perpetually On The Wrong Side Of](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/structures_typedef/4-new_dog.c)

Write a function that creates a new dog.

 - Prototype: dog_t *new_dog(char *name, float age, char *owner);
 - You have to store a copy of name and owner
 - Return NULL if the function fails

----------------------------------

### [5. How Many Legs Does a Dog Have If You Call His Tail a Leg ? Four. Saying That a Tail Is a Leg Doesn't Make It a Leg](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/structures_typedef/5-free_dog.c)

Write a function that frees dogs.

 - Prototype: void free_dog(dog_t *d);
 
---------------------------------------
