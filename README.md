![img](https://ict.iitk.ac.in/wp-content/uploads/c-programming-2.jpg)

## Description
### C Language

>C is a general-purpose, high-level programming language originally developed by Dennis Ritchie in 1972. It is a powerful and efficient language that is widely used in system programming, embedded systems, and other areas where performance is critical. Some of the key features of C include its low-level access to memory, its flexibility and portability, and its ability to handle a wide variety of data types and data structures. C is also known for its use of pointers, which allow for efficient manipulation of data in memory. Additionally, C has a large number of libraries and frameworks that can be leveraged to create efficient and reliable software. C is a popular choice for many developers because of its speed and performance, as well as its wide range of applications.

## C Projects

### [C - HELLO, WORLD](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x00-hello_world)
#### `GENERAL`

At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>Why C programming is awesome</summary>
<br>

>C programming is considered awesome for its low-level control over the computer hardware and for its efficiency and ability to handle complex systems. It is also widely used for system programming and embedded systems.
</details>
<details>
<summary>Who invented C </summary>
<br>

>C programming was developed by Dennis Ritchie at Bell Labs in the 1970s.
</details>
<details>
<summary>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds</summary>
<br>

>Dennis Ritchie is a computer scientist who developed the C programming language and also worked on the Unix operating system. Brian Kernighan is a computer scientist and co-author of several books on the C programming language. Linus Torvalds is a Finnish-American software engineer and the creator of the Linux kernel.
</details>
<details>
<summary>What happens when you type gcc main.c</summary>
<br>

>When you type `gcc main.c` on the command line, the GCC compiler will compile the C source code file `main.c` into an executable program.
</details>
<details>
<summary>What is an entry point</summary>
<br>

>he entry point of a program is the point at which the program starts executing. In C, the default entry point is the `main` function.
</details>
<details>
<summary>What is main</summary>
<br>

>The `main` function is the starting point of a C program. It is where the program execution begins and where the program's logic is defined.
</details>
<details>
<summary>How to print text using printf, puts and putchar</summary>
<br>

>To print text in C, you can use the `printf` function, the `puts` function, or the `putchar` function.
</details>
<details>
<summary>How to get the size of a specific type using the unary operator sizeof</summary>
<br>

>To get the size of a specific type in C, you can use the unary operator `sizeof`. For example, `sizeof(int)` will return the size of an int type.
</details>
<details>
<summary>How to compile using gcc</summary>
<br>

>To compile using GCC, you can type `gcc filename.c` on the command line, where `filename.c` is the name of the C source code file you want to compile.
</details>
<details>
<summary>What is the default program name when compiling with gcc</summary>
<br>

>The default program name when compiling with GCC is `a.out`.
</details>
<details>
<summary>What is the official C coding style and how to check your code with betty-style</summary>
<br>

>The official C coding style is specified by the American National Standards Institute (ANSI) in the ANSI C standard. You can check your code with `betty-style` by typing `betty filename.c` on the command line, where `filename.c` is the name of the C source code file you want to check.
</details>
<details>
<summary>How to find the right header to include in your source code when using a standard library function</summary>
<br>

>To find the right header to include in your source code when using a standard library function, you can consult the C standard library reference manual or search online for information about the function you want to use.
</details>
<details>
<summary>How does the main function influence the return value of the program</summary>
<br>

>The `main` function influences the return value of a C program in the following way: a program will return 0 if the `main` function returns 0. If the `main` function returns any other value, the program will return that value.
</details>

-------------------------------


### [C - VARIABLES, IF, ELSE, WHILE](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x01-variables_if_else_while)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are the arithmetic operators and how to use them</summary>
<br>

>Arithmetic operators in C: `+`, `-`, `*`, `/`, `%` (modulo). They can be used to perform basic arithmetic operations on numerical values (integers or floating-point). For example, `5 + 3` would evaluate to `8`, and `10 / 3` would evaluate to `3`.
</details>
<details>
<summary>What are the logical operators (sometimes called boolean operators) and how to use them</summary>
<br>

>Logical operators in C: `&&` (AND), `||` (OR), `!` (NOT). They can be used to perform logical operations on boolean values (TRUE or FALSE). For example, `TRUE && FALSE` would evaluate to `FALSE`, and `!TRUE` would evaluate to `FALSE`.

</details>
<details>
<summary>What the the relational operators and how to use them</summary>
<br>

>Relational operators in C: `<`, `>`, `<=`, `>=`, `==`, `!=`. They can be used to compare two values and evaluate to a boolean result (TRUE or FALSE). For example, `5 < 3` would evaluate to `FALSE`, and `10 >= 10` would evaluate to `TRUE`.
</details>
<details>
<summary>What values are considered TRUE and FALSE in C</summary>
<br>

>In C, values `0` and `NULL` are considered `FALSE`, while all other values are considered `TRUE`.
</details>
<details>
<summary>What are the boolean operators and how to use them</summary>
<br>

>Boolean operators are synonymous with logical operators.
</details>
<details>
<summary>How to use the if, if ... else statements</summary>
<br>

>The `if` statement can be used to execute a block of code only if a certain condition is met. The syntax is: `if (condition) { code to be executed }`. The `if ... else` statement is similar, but includes an additional block of code to be executed if the condition is not met. The syntax is: `if (condition) { code to be executed } else { code to be executed }`.
</details>
<details>
<summary>How to use comments</summary>
<br>

>Comments in C are preceded by `//` for single-line comments, or `/*` and `*/` for multi-line comments. They are ignored by the compiler and used to add notes and explanations to the code.
</details>
<details>
<summary>How to declare variables of types char, int, unsigned int</summary>
<br>

>Variables can be declared in C using the type of the variable, followed by the variable name. For example, `int x`; declares an `int` variable named `x`, and `char c`; declares a `char` variable named c. `unsigned int` is an integer type that only stores positive values.
</details>
<details>
<summary>How to assign values to variables</summary>
<br>

>Values can be assigned to variables using the assignment operator `=`. For example, `x = 5`; assigns the value `5` to the variable `x`.
</details>
<details>
<summary>How to print the values of variables of type char, int, unsigned int with printf</summary>
<br>

>The values of variables can be printed using the `printf` function, with a format specifier for the type of the variable. For example, `printf("x: %d\n", x);` will print the value of `x` as an integer, and `printf("c: %c\n", c);` will print the value of `c` as a character.
</details>
<details>
<summary>How to use the while loop</summary>
<br>

>The `while` loop repeats a block of code as long as a certain condition is met. The syntax is: `while (condition) { code to be executed }`.
</details>
<details>
<summary>How to use variables with the while loop</summary>
<br>

>Variables can be used in a `while` loop just like any other part of the code. For example, a loop counter can be incremented inside the loop to control the number of iterations.
</details>
<details>
<summary>How to print variables using printf</summary>
<br>

>The `printf` function can be used to print variables just like it can be used to print literal values or strings.
</details>
<details>
<summary>What is the ASCII character set</summary>
<br>

>The ASCII character set defines a mapping of integers to characters. It is used to represent and manipulate text in computers.
</details>
<details>
<summary>What are the purpose of the gcc flags -m32 and -m64</summary>
<br>

>The `-m32` and `-m64` flags are used when compiling a program with `gcc` to specify the target architecture and the size of pointers. `-m32` generates code for a 32-bit architecture, while `-m64` generates code for a 64-bit architecture. The size of pointers and other data types are determined by the architecture, so it is important to specify the correct flag when compiling.
</details>

--------------------------------

### [C - FUNCTIONS, NESTED LOOPS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x02-functions_nested_loops)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are nested loops and how to use them</summary>
<br>

>Nested loops are loops that are placed inside another loop. For example, a for loop can be nested inside another for loop. The inner loop is executed completely for each iteration of the outer loop. To use nested loops, you can write a loop inside the body of another loop.
</details>
<details>
<summary>What is a function and how do you use functions</summary>
<br>

>A function is a block of code that performs a specific task and can be called multiple times in a program. Functions can take arguments and return values. To use functions, you can define the function with a unique name, its parameters, and its body, and call the function with arguments in the required places.
</details>
<details>
<summary>What is the difference between a declaration and a definition of a function</summary>
<br>

>A declaration of a function tells the compiler about the function's name, return type, and parameters. A definition of a function provides the implementation of the function's logic. A function can be declared multiple times in a program, but it should have only one definition.
</details>
<details>
<summary>What is a prototype</summary>
<br>

>A prototype is a declaration of a function that specifies the function's name, return type, and parameters. Prototypes are used to inform the compiler about the function before it is actually defined.
</details>
<details>
<summary>Scope of variables</summary>
<br>

>The scope of a variable defines where in a program it can be accessed. There are two types of scopes: global scope, which means a variable can be accessed from anywhere in the program, and local scope, which means a variable is only accessible within a specific function or block of code.
</details>
<details>
<summary>What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89</summary>
<br>

>`-Wall` enables all warning messages. `-Werror` makes all warnings into errors. `-pedantic` enforces strict adherence to the language standard. `-Wextra` enables additional warnings. `-std=gnu89` sets the language standard to be used to the 1989 version of the C standard with GNU extensions.
</details>
<details>
<summary>What are header files and how to to use them with #include</summary>
<br>

>Header files are a means of including declarations in multiple source files. The declarations in header files can be reused in multiple source files using the `#include` preprocessor directive. For example, you can create a header file with function prototypes, and include it in multiple source files to use those functions.
</details>

--------------------------------------

### [C - MAKEFILES](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x03-makefiles)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are make, Makefiles</summary>
<br>

>`make` is a build automation tool that automates the process of compiling and linking source code files into executable programs. A `Makefile` is a file that specifies how to build a program and what dependencies exist between the various parts of the program.
</details>
<details>
<summary>When, why and how to use Makefiles</summary>
<br>

>Makefiles are used to automate the build process of a program, reducing the amount of manual effort required. They specify how the source files of a program are to be compiled, linked and packaged into an executable. To use a Makefile, you write the rules and dependencies between the parts of your program, and then run the `make` command on the Makefile.
</details>
<details>
<summary>What are rules and how to set and use them</summary>
<br>

>Rules in a Makefile specify the dependencies between the parts of a program and how they are to be built. For example, a rule might state that a target file depends on a set of source files, and provides a command to build the target file from the source files. To set and use rules in a Makefile, you write the target, dependencies, and commands in a rule format, and then run the `make` command on the Makefile.
</details>
<details>
<summary>What are explicit and implicit rules</summary>
<br>

>Explicit rules specify how to build a target file from its dependencies and are written in a Makefile. Implicit rules are predefined patterns for building target files from their dependencies that `make` uses if no explicit rule is specified. Implicit rules are a convenient way to build simple programs without writing explicit rules for each target file.
</details>
<details>
<summary>What are the most common / useful rules</summary>
<br>

>Some of the most common and useful rules are:  
=> Compiling a source file into an object file   
=> Linking object files into an executable   
=> Cleaning up build artifacts  
=> Installing the program or libraries  
</details>
<details>
<summary>What are variables and how to set and use them</summary>
<br>

>Variables in a Makefile store values that can be referenced later in the file. To set and use variables, you assign a value to a variable name with the assignment operator `=` and then reference the variable name in the Makefile. For example, you can set a variable `CC` to store the compiler command, and then reference `$(CC)` in the rules to specify the compiler to be used.
</details>

----------------------------------

### [C - MORE FUNCTIONS, MORE NESTED LOOPS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x04-more_functions_nested_loops)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are nested loops and how to use them</summary>
<br>

>Nested loops are loops that are inside another loop. They are used to repeat a specific set of instructions for a given number of times, for each iteration of the outer loop.
</details>
<details>
<summary>What is a function and how do you use functions</summary>
<br>

>A function is a self-contained block of code that performs a specific task. Functions can accept input arguments and return output. They allow you to break down your program into smaller, more manageable parts, and reuse code. To use a function, you need to define it and call it.
</details>
<details>
<summary>What is the difference between a declaration and a definition of a function</summary>
<br>

>A declaration of a function informs the compiler about the function's name, return type, and parameters. A definition of a function provides the actual body of the function, including the statements that are executed when the function is called.
</details>
<details>
<summary>What is a prototype</summary>
<br>

>A prototype is a declaration of a function that specifies its return type, name, and parameters. It is used to declare the function before it is defined in the code, so that the compiler knows about the function's signature and can check for compatibility when the function is called.
</details>
<details>
<summary>Scope of variables</summary>
<br>

>The scope of a variable determines where in the code the variable can be accessed. There are two types of scope: local scope and global scope. A variable declared within a function has local scope and can only be accessed within that function. A variable declared outside of any function has global scope and can be accessed from any part of the code.
</details>
<details>
<summary>What are the gcc flags -Wall -Werror -pedantic -Wextra -std=gnu89</summary>
<br>

>`gcc` flags `-Wall`, `-Werror`, `-pedantic`, and `-Wextra` are used to enable different levels of compiler warnings during the compilation process. `-Wall` enables all the warnings that the compiler can produce, `-Werror` treats warnings as errors, `-pedantic` enforces strict ISO C compliance, and `-Wextra` enables extra warnings. `-std=gnu89` sets the language standard to be used to the 1989 version of the C standard with GNU extensions.
</details>
<details>
<summary>What are header files and how to to use them with #include</summary>
<br>

>Header files are files with the extension `.h` that contain declarations for functions, variables, and other constructs in C programming. The `#include` preprocessor directive is used to include header files in your code, allowing you to use the functions and variables declared in the header file. This way, you can use the same code in multiple files, without having to rewrite it.
</details>

---------------------------------------

### [C - POINTERS, ARRAYS AND STRINGS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x05-pointers_arrays_strings)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are pointers and how to use them</summary>
<br>

>Pointers are variables that store the memory address of another variable. To use pointers, you must first declare a pointer variable, then assign the memory address of the target variable to the pointer. For example, `int *ptr; int x=5; ptr=&x;` declares a pointer `ptr` that points to the memory location of `x`.
</details>
<details>
<summary>What are arrays and how to use them</summary>
<br>

>Arrays are a collection of variables of the same type stored in contiguous memory locations. Arrays are declared by specifying the type of the elements, followed by the name of the array and the size of the array in square brackets. For example, `int arr[5];` declares an array `arr` ofsize 5 that can store integers.
</details>
<details>
<summary>What are the differences between pointers and arrays</summary>
<br>

>The main difference between pointers and arrays is that arrays provide a way to access a set of values with a single name, while pointers provide a way to directly manipulate memory locations. Arrays are a higher-level construct compared to pointers and are implemented using pointers.
</details>
<details>
<summary>How to use strings and how to manipulate them</summary>
<br>

>Strings are arrays of characters that represent text. To use strings, you can declare an array of characters, but it is more common to use a null-terminated string, which is a sequence of characters terminated by a special character, `'\0'`. You can manipulate strings using string functions such as `strlen`, `strcpy`, and `strcat`.
</details>
<details>
<summary>Scope of variables</summary>
<br>

>The scope of a variable is the region of the program where the variable is defined and can be accessed. Variables can have global or local scope. Global variables are defined outside of all functions and can be accessed from anywhere in the program. Local variables are defined inside a function and are only accessible within that function.
</details>

----------------------------------------

### [C - MORE POINTERS, ARRAYS AND STRINGS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x06-pointers_arrays_strings)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are pointers and how to use them</summary>
<br>

>Pointers are variables that store the memory address of another variable. To use pointers, you must first declare a pointer variable, then assign the memory address of the target variable to the pointer. For example, `int *ptr; int x=5; ptr=&x;` declares a pointer `ptr` that points to the memory location of `x`.
</details>
<details>
<summary>What are arrays and how to use them</summary>
<br>

>Arrays are a collection of variables of the same type stored in contiguous memory locations. Arrays are declared by specifying the type of the elements, followed by the name of the array and the size of the array in square brackets. For example, `int arr[5];` declares an array `arr` ofsize 5 that can store integers.
</details>
<details>
<summary>What are the differences between pointers and arrays</summary>
<br>

>The main difference between pointers and arrays is that arrays provide a way to access a set of values with a single name, while pointers provide a way to directly manipulate memory locations. Arrays are a higher-level construct compared to pointers and are implemented using pointers.
</details>
<details>
<summary>How to use strings and how to manipulate them</summary>
<br>

>Strings are arrays of characters that represent text. To use strings, you can declare an array of characters, but it is more common to use a null-terminated string, which is a sequence of characters terminated by a special character, `'\0'`. You can manipulate strings using string functions such as `strlen`, `strcpy`, and `strcat`.
</details>
<details>
<summary>Scope of variables</summary>
<br>

>The scope of a variable is the region of the program where the variable is defined and can be accessed. Variables can have global or local scope. Global variables are defined outside of all functions and can be accessed from anywhere in the program. Local variables are defined inside a function and are only accessible within that function.
</details>

----------------------------

### [C - EVEN MORE POINTERS, ARRAYS AND STRINGS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x07-pointers_arrays_strings)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are pointers to pointers and how to use them</summary>
<br>

>Pointers to pointers are variables that store the memory address of another pointer variable. These can be useful when the pointer needs to be dynamically allocated, or when working with multi-dimensional arrays or complex data structures. To use pointers to pointers, the address of a pointer variable must be taken and stored in another pointer variable.
</details>
<details>
<summary>What are multidimensional arrays and how to use them</summary>
<br>

>Multidimensional arrays are arrays that have more than one dimension. They can be created by allocating arrays of arrays, where each inner array represents a single dimension. To access elements of a multidimensional array, multiple indices are used to specify the position of the element.
</details>
<details>
<summary>What are the most common C standard library functions to manipulate strings</summary>
<br>

>Common C standard library functions to manipulate strings include `strlen()` to get the length of a string, `strcmp()` to compare two strings, `strcpy()` to copy one string to another, `strcat()` to concatenate two strings, and `sprintf()` to format a string. Other functions for manipulating strings include `strtok()` for tokenizing a string, `strstr()` for finding substrings, and `memset()` for initializing a string with a specific value.
</details>

----------------------------

### [C - RECURSION](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x08-recursion)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What is recursion</summary>
<br>

>Recursion is a programming technique where a function calls itself in order to solve a problem by breaking it down into smaller sub-problems.
</details>
<details>
<summary>How to implement recursion</summary>
<br>

>To implement recursion, a function must have two elements: a base case and a recursive case. The base case is the end condition that stops the recursion, and the recursive case is the step that reduces the problem and calls the function again.
</details>
<details>
<summary>In what situations you should implement recursion</summary>
<br>

>Recursion should be used when the problem can be broken down into smaller sub-problems that are similar to the original problem, and the solution to the sub-problems can be combined to form the solution to the original problem. Examples include tree traversal, finding the nth element in a list or sequence, and computing factorials.
</details>
<details>
<summary>In what situations you shouldn’t implement recursion</summary>
<br>

>Recursion should not be used in situations where the problem cannot be broken down into smaller sub-problems or when the problem is too complex to be solved with a simple recursive solution. Recursion can also be slow and consume a lot of memory for large inputs, so it's not suitable for problems with large inputs. Additionally, recursion can be difficult to understand, debug, and maintain, especially for those who are not familiar with the technique.
</details>

------------------------------

### [C - STATIC LIBRARIES](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x09-static_libraries)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What is a static library, how does it work, how to create one, and how to use it</summary>
<br>

>A static library is a collection of object files combined into a single executable file at compile time. To create a static library, compile source code into object files, then use the `ar` command (e.g. `ar rcs liblibrary.a file1.o file2.o`). To use a static library, compile program with options `-L` (library location) and `-l` (library name), then link program with library using a linker. Shared libraries are often used instead of static libraries due to their flexibility and efficiency.
</details>
<details>
<summary>Basic usage of ar, ranlib, nm</summary>
<br>

>The `ar` utility is used to create, modify, and extract files from static libraries. The `ranlib` utility is used to update the symbol index of a static library, which is used by the linker to resolve symbols. The `nm` utility is used to display the symbol table of an object file or a library, which shows the names of the functions and variables defined in the file.
</details>

--------------------------------

### [C - ARGC, ARGV](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x0A-argc_argv)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>How to use arguments passed to your program</summary>
<br>

>To use arguments passed to your program in C, you can access them using the `argc` and `argv` parameters of the main function. `argc` is the number of arguments passed to the program, including the name of the program itself, and `argv` is an array of strings representing the arguments.
</details>
<details>
<summary>What are two prototypes of main that you know of, and in which case do you use one or the other</summary>
<br>

>Two prototypes of main: `int main(void)` and `int main(int argc, char *argv[])`. First is used without args, second is used with args.
</details>
<details>
<summary>How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters</summary>
<br>

>Use `__attribute__((unused))` (GCC) or `(void)` to indicate unused variables or parameters in functions. Example: `void foo(__attribute__((unused)) int x)` or `void foo(int x) { (void)x; }`.
</details>

------------------------------------

### [C - MALLOC, FREE](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x0B-malloc_free)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What is the difference between automatic and dynamic allocation</summary>
<br>

>The difference between automatic and dynamic allocation is that automatic allocation is done automatically by the compiler and the memory is automatically deallocated when the block of code that declared the variable ends. Dynamic allocation, on the other hand, allows the program to allocate memory at runtime, and the memory must be manually deallocated when no longer needed.
</details>
<details>
<summary>What is malloc and free and how to use them</summary>
<br>

>`malloc` is a standard library function in C that dynamically allocates memory. It takes a single argument, the number of bytes to allocate, and returns a pointer to the first byte of the newly allocated memory. `free` is another standard library function in C that deallocates memory previously allocated with `malloc`. It takes a single argument, a pointer to the memory to be deallocated.
</details>
<details>
<summary>Why and when use malloc</summary>
<br>

>`malloc` should be used when you need to allocate memory dynamically, that is, at runtime, and the amount of memory required is not known beforehand. For example, when you need to allocate an array with a size that is determined at runtime.
</details>
<details>
<summary>How to use valgrind to check for memory leak</summary>
<br>

>`valgrind` is a powerful tool for checking for memory leaks and other memory-related errors. It can be used to detect memory leaks, uninitialized memory access, and use of freed memory. To use `valgrind` with your program, simply run `valgrind <program_name> <arguments>`.
</details>

---------------------------------

### [C - MORE MALLOC, FREE](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x0C-more_malloc_free)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>How to use the exit function</summary>
<br>

>`exit` is a function from the standard library that terminates a program immediately. It takes an integer argument, the exit status of the program. Zero exit status indicates success and non-zero indicates failure. Example: `exit(0);`
</details>
<details>
<summary>What are the functions calloc and realloc from the standard library and how to use them</summary>
<br>

>`calloc` is a function that allocates memory dynamically and zeros it out. It takes two arguments: the number of elements to allocate memory for, and the size of each element. It returns a pointer to the first byte of the newly allocated memory. Example: `int *ptr = (int *) calloc(5, sizeof(int));`  
`realloc` is a function that changes the size of previously allocated memory block. It takes two arguments: a pointer to the previous memory block and the new size in bytes. It returns a pointer to the newly allocated memory block. If the new size is smaller, the excess memory is freed. If it fails, it returns `NULL`. Example: `ptr = (int *) realloc(ptr, 10 * sizeof(int));`
</details>

-----------------------------

### [C - PREPROCESSOR](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x0D-preprocessor)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are macros and how to use them</summary>
<br>

>Macros are simple text substitutions. They are created using the `#define` preprocessor directive, which causes the preprocessor to replace every instance of a macro with its corresponding text. For example: `#define MAX_LENGTH 100`
</details>
<details>
<summary>What are the most common predefined macros</summary>
<br>

>Common predefined macros include `__FILE__`, `__LINE__`, `__DATE__`, `__TIME__`, `__STDC__`, and `__cplusplus`.
</details>
<details>
<summary>How to include guard your header files</summary>
<br>

>To include guard your header files, you can wrap the entire content of the header file in an `#ifndef` macro, like this:  
`#ifndef MY_HEADER_H  
#define MY_HEADER_H  
/*header file content here*/  
#endif`  
</details>

---------------------------------------------

### [C - STRUCTURES, TYPEDEF](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x0E-structures_typedef)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are structures, when, why and how to use them</summary>
<br>

>Structures (often referred to as structs) are composite data types that allow you to group together variables of different data types into a single unit. They are useful for organizing data into meaningful collections and for abstracting implementation details. Structs can be declared using the `struct` keyword and accessed using the dot operator.
</details>
<details>
<summary>How to use typedef</summary>
<br>

>`typedef` is a keyword in C and C++ that allows you to create an alias for an existing data type. It makes your code more readable and maintainable by giving names to complex data types.
</details>

_____________________________________

### [C - FUNCTION POINTERS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x0F-function_pointers)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are function pointers and how to use them</summary>
<br>

>Function pointers are pointers that hold addresses of functions. They allow you to store and pass around references to functions, and call the referenced functions indirectly.
</details>
<details>
<summary>What does a function pointer exactly hold</summary>
<br>

>A function pointer holds the memory address of a function in the virtual memory. When called, the function pointer is dereferenced to obtain the address of the function it refers to, and the function is then executed.
</details>
<details>
<summary>Where does a function pointer point to in the virtual memory</summary>
<br>

>A function pointer points to the code segment of a function in the virtual memory. The code segment is a section of memory that holds the machine code instructions of a function. When a function is called through a function pointer, control is transferred to the code segment of the function, and the function is executed.
</details>

------------------------------------

### [C - VARIADIC FUNCTIONS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x10-variadic_functions)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What are variadic functions</summary>
<br>

>Variadic functions are functions that take a varying number of arguments. In C, variadic functions are declared using the `...` syntax in the parameter list. They can be used to pass a variable number of arguments of any type to a function.
</details>
<details>
<summary>How to use va_start, va_arg and va_end macros</summary>
<br>

>The `va_start`, `va_arg`, and `va_end` macros are used in C to process a variable number of arguments passed to a variadic function. The `va_start` macro is used to initialize a `va_list` object, which holds the arguments passed to the variadic function. The `va_arg` macro is used to retrieve the next argument from the `va_list` object. The `va_end` macro is used to clean up the `va_list` object after all arguments have been processed.
</details>
<details>
<summary>Why and how to use the const type qualifier</summary>
<br>

>The `const` type qualifier in C indicates that a variable or function's return value cannot be modified, helping to prevent accidental changes and improve code readability. For example: `const int MAX_VALUES = 100;`. Here, the constant `MAX_VALUES` is declared with const, meaning its value cannot be changed during the program's execution.
</details>

-----------------------------------

### [C - SINGLY LINKED LISTS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x12-singly_linked_lists)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>When and why using linked lists vs arrays</summary>
<br>

>Linked lists vs Arrays: Linked lists have dynamic size, making it easier to insert or remove elements. Arrays have a fixed size and offer faster access to elements by index. It is important to choose the right data structure based on the specific requirements of your program.
</details>
<details>
<summary>How to build and use linked lists</summary>
<br>

>Building and using linked lists: To build a linked list, create a node that stores a value and a reference to the next node in the list. Add new nodes by updating the reference of the previous node to point to the new node. To use the linked list, traverse it by following the references from node to node until you reach the end of the list. This can be used to access the values stored in the linked list.
</details>

-------------------------

### [C - MORE SINGLY LINKED LISTS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x13-more_singly_linked_lists)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>How to use linked lists</summary>
<br>

>Using linked lists: To use linked lists, you need to build the list as described in the previous answer. Once the list is built, you can traverse it by following the references from node to node until you reach the end of the list. This can be used to access or modify the values stored in the linked list, or to perform other operations.
</details>
<details>
<summary>Start to look for the right source of information without too much help</summary>
<br>

>Finding information: To find information, use search engines, check forums/discussion boards, visit libraries/archives (such as GitHub), and read textbooks/online courses. Evaluate sources to ensure they are reliable and relevant.
</details>

--------------------------

### [C - BIT MANIPULATION](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x14-bit_manipulation)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>Look for the right source of information without too much help</summary>
<br>

>To find information on a topic, use search engines like Google, check forums/discussion boards, visit libraries/archives such as GitHub, and read textbooks/online courses. Evaluate sources to ensure they are reliable and relevant.
</details>
<details>
<summary>How to manipulate bits and use bitwise operators</summary>
<br>

>To manipulate bits, you can use bitwise operators like `AND (&)`, `OR (|)`, `XOR (^)`, `NOT (~)`, `left shift (<<)`, and `right shift (>>)`. These operators perform operations on the individual bits of an integer value and can be used for tasks like setting, clearing, or testing individual bits, or for bit-level operations like masking and shifting. Understanding how to manipulate bits and use bitwise operators can be useful for low-level programming tasks or for optimizing code for performance.
</details>

--------------------------------

### [C - FILE I/O](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x15-file_io)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>Look for the right source of information online</summary>
<br>

>To find information online, try using search engines like Google or Bing, or technical resources like Stack Overflow, GitHub, and programming forums.
</details>
<details>
<summary>How to create, open, close, read and write files</summary>
<br>

>To create, open, close, read, and write files in a programming language, use its specific file handling functions or libraries. For example, in C, you can use the standard library functions `fopen`, `fclose`, `fread`, and `fwrite`.
</details>
<details>
<summary>What are file descriptors</summary>
<br>

>A file descriptor is a numerical value that represents an open file in a operating system.
</details>
<details>
<summary>What are the 3 standard file descriptors, what are their purpose and what are their POSIX names</summary>
<br>

>The 3 standard file descriptors are `stdin`, `stdout`, and `stderr`, their purpose is to represent the standard input, standard output, and standard error streams respectively. Their `POSIX` names are `0`, `1`, and `2` respectively.
</details>
<details>
<summary>How to use the I/O system calls open, close, read and write</summary>
<br>

>The I/O system calls `open`, `close`, `read`, and `write` are used to open, close, read from, and write to a file respectively in a low-level manner.
</details>
<details>
<summary>What are and how to use the flags O_RDONLY, O_WRONLY, O_RDWR</summary>
<br>

>The flags `O_RDONLY`, `O_WRONLY`, and `O_RDWR` are used when calling the open system call to specify the mode in which to `open` a file: read-only, write-only, or read-write.
</details>
<details>
<summary>What are file permissions, and how to set them when creating a file with the open system call</summary>
<br>

>File permissions determine who can access a file and what actions they can perform on it. They can be set using the `mode` argument when calling the `open` system call, or using the `chmod` system call.
</details>
<details>
<summary>What is a system call</summary>
<br>

>A system call is a function provided by the operating system that allows a program to request a service from the kernel, such as opening a file or creating a process.
</details>
<details>
<summary>What is the difference between a function and a system call</summary>
<br>

>The difference between a function and a system call is that a function is a subroutine provided by a library or the program itself, while a system call is a subroutine provided by the operating system that requests a service from the kernel.
</details>

----------------------------

### [C - Doubly Linked Lists](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x16-doubly_linked_lists)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What is a doubly linked list</summary>
<br>

>A doubly linked list is a data structure that consists of a sequence of elements, each with a reference to its previous and next elements. This allows for more efficient traversal in both directions compared to a singly linked list.
</details>
<details>
<summary>How to use doubly linked lists</summary>
<br>

>Doubly linked lists can be used for tasks such as dynamic memory allocation, implementing stacks and queues, and representing trees and graphs. To use a doubly linked list, you would typically create nodes that store your data and pointers to the previous and next elements, and use functions to manipulate the list, such as inserting or deleting elements.
</details>
<details>
<summary>Start to look for the right source of information without too much help</summary>
<br>

>To look for the right source of information on doubly linked lists, you can start by searching for `doubly linked list` on search engines like Google, or consulting technical resources like books, online tutorials, and programming forums. Additionally, searching for "doubly linked list implementation" in the programming language you are using could also be helpful.
</details>

-------------------------

### [C - Hash Tables](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/0x17-hash_tables)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What is a hash function</summary>
<br>

>A hash function is a mathematical function that takes an input (or `message`) and returns a fixed-size string of bytes, typically a `digest` that is unique to the unique values of the input. The output is usually referred to as a `hash` or a `message digest`.
</details>
<details>
<summary>What makes a good hash function</summary>
<br>

>A good hash function has several properties, including deterministic output, efficiency, and collision resistance. The hash output should consistently be the same for a given input and the hash should be computed quickly. Additionally, it should be difficult to find two inputs that produce the same hash value (i.e., two inputs that collide).
</details>
<details>
<summary>What is a hash table, how do they work and how to use them</summary>
<br>

>A hash table is a data structure that implements an associative array, a structure that can map keys to values. A hash table uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.
</details>
<details>
<summary>What is a collision and what are the main ways of dealing with collisions in the context of a hash table</summary>
<br>

>A collision in a hash table occurs when two different keys are mapped to the same slot. There are several ways of dealing with collisions, including chaining (where each slot points to a linked list of key-value pairs) and open addressing (where keys are stored directly in the array, with collisions resolved by probing).
</details>
<details>
<summary>What are the advantages and drawbacks of using hash tables</summary>
<br>

>The main advantages of hash tables include constant-time average case O(1) lookups, insertion and deletion operations, and their versatility as they can be used to implement several other data structures. Drawbacks include poor worst-case performance (O(n)) if the hash function causes many keys to map to the same slot and a need for the table to be resized if the number of elements stored in the table grows too large.
</details>
<details>
<summary>What are the most common use cases of hash tables</summary>
<br>

>Hash tables are used in many applications, including database indexing, caching, and hash-based data structures such as sets and maps. They are also used in various algorithms, such as hashtable-based algorithms for finding duplicates in an array and for implementing associative arrays (also known as dictionaries).
</details>

----------------------

### [C - Search Algorithms](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/tree/master/search_algorithms)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What is a search algorithm</summary>
<br>

>A search algorithm is a process for finding an item with specified properties among a collection of items.
</details>
<details>
<summary>What is a linear search</summary>
<br>

>Linear search is a simple search algorithm that checks every item in the collection one by one until it finds the desired item. It has a time complexity of O(n) in the worst case, where n is the number of items in the collection.
</details>
<details>
<summary>What is a binary search</summary>
<br>

>Binary search is a search algorithm that works on sorted arrays. It starts by comparing the middle item with the target value, and then discards half of the remaining items based on the comparison result. The process is repeated until the desired item is found or it is clear that the item is not in the collection. Binary search has a time complexity of O(log n) in the worst case.
</details>
<details>
<summary>What is the best search algorithm to use depending on your needs</summary>
<br>

>The best search algorithm to use depends on your needs. If the collection is unsorted, linear search is the only option. If the collection is sorted, binary search is the more efficient option for large collections due to its logarithmic time complexity. For small collections, linear search may be more efficient due to the overhead of sorting the collection and the overhead of repeatedly dividing the collection in binary search.
</details>

--------------------------

### [C - Binary trees](https://github.com/MathieuMorel62/holbertonschool-binary_trees)
#### `GENERAL`
At the end of this project, you are expected to be able to [explain to anyone](https://intranet.hbtn.io/rltoken/gwuqSZXS7ElRbiObQzDcTg), **without the help of Google:**

<details>
<summary>What is a binary tree</summary>
<br>

>A binary tree is a tree data structure in which each node has at most two children, referred to as the left child and the right child.
</details>
<details>
<summary>What is the difference between a binary tree and a Binary Search Tree</summary>
<br>

>A Binary Search Tree (BST) is a specific type of binary tree where for each node, the value of all the nodes in its left subtree is less than the value of the node, and the value of all the nodes in its right subtree is greater than the value of the node.
</details>
<details>
<summary>What is the possible gain in terms of time complexity compared to linked lists</summary>
<br>

>Compared to linked lists, a binary tree can provide faster search and insertion operations due to its ability to effectively reduce the search space at each step. The time complexity of search and insertion in a binary tree is O(log n) in the average case and O(n) in the worst case, where n is the number of nodes in the tree.
</details>
<details>
<summary>What are the depth, the height, the size of a binary tree</summary>
<br>

>The depth of a node in a binary tree is the number of edges from the root to the node. The height of a binary tree is the maximum depth of any node in the tree. The size of a binary tree is the number of nodes in the tree.
</details>
<details>
<summary>What are the different traversal methods to go through a binary tree</summary>
<br>

>There are several methods to traverse a binary tree, including pre-order, in-order, post-order, and level-order traversal.
</details>
<details>
<summary>What is a complete, a full, a perfect, a balanced binary tree</summary>
<br>

>A complete binary tree is a binary tree in which every level, except possibly the last level, is completely filled and all nodes are left-justified. A full binary tree is a binary tree in which every node has either 0 or 2 children. A perfect binary tree is a binary tree that is both complete and full. A balanced binary tree is a binary tree in which the height of the two subtrees of any node differ by at most one.
</details>

----------------------------------

## Author

- Mathieu Morel
