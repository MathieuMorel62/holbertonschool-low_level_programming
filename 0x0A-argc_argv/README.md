# C _ ARGC, ARGV

<img src="https://techvidvan.com/tutorials/wp-content/uploads/sites/2/2021/07/Command-Line-Arguments-in-C.jpg" width="100%">

## Description
### Introduction to argc and argv in C

In C programming, `argc` (argument count) and `argv` (argument vector) are two variables that are passed to the `main()` function when a program is executed from the command line. They are used to access and process command-line arguments passed to the program.  
  
### argc

`argc` is an integer variable that holds the number of command-line arguments passed to the program. It includes the name of the program itself, which is always the first argument.  
  
For example, if a program called `myprogram` is executed with the command `./myprogram arg1 arg2 arg3`, `argc` would have a value of 4 (the program name and 3 arguments).

### argv

`argv` is an array of character pointers that holds the actual command-line arguments passed to the program. Each element of the array corresponds to a single argument, with the first element (`argv[0]`) being the name of the program.  
  
For example, if a program called `myprogram` is executed with the command `./myprogram arg1 arg2 arg3`, argv would be an array with 4 elements: `argv[0]` would hold "myprogram", `argv[1]` would hold "arg1", `argv[2]` would hold "arg2", and `argv[3]` would hold "arg3".

### Using argc and argv

`argc` and `argv` can be used to access and process command-line arguments passed to the program. Here is an example of how to use them to print the command-line arguments passed to a program:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    printf("Number of arguments: %d\n", argc);
    for (i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    return 0;
}
```

You can also use `argc` and `argv` to check for specific command-line arguments and take different actions based on their presence. For example, you can check whether a specific flag was passed to the program, like so:

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
    int i;
    for (i = 1; i < argc; i++) {
        if (strcmp(argv[i], "-v") == 0) {
            printf("Verbose mode enabled\n");
        }
    }
    return 0;
}
```

`argc` and `argv` can be powerful tools for creating command-line programs in C. With the above information, you can now start using them in your own C programs.

## Resources
### Read or watch:

- [Arguments To Main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
- [Argc And Argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
- [What Does Argc And Argv Mean ?](https://www.youtube.com/watch?v=aP1ijjeZc24)
- [How To Compile With Unused Variables](https://www.google.com/webhp?q=unused+variable+C)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called [main.h](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/main.h)
- Don’t forget to push your header file
- You are allowed to use the standard library

----------------------------

# TASKS

#### [0. It Ain't What They Call You, It's What You Answer To](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/0-whatsmyname.c)

Write a program that prints its name, followed by a new line.

 - If you rename the program, it will print the new name, without having to compile it again
 - You should not remove the path before the name of the program

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis

mathieu@ubuntu:~/argc, argv$ ./mynameis 
./mynameis

mathieu@ubuntu:~/argc, argv$ mv mynameis mynewnameis
mathieu@ubuntu:~/argc, argv$ ./mynewnameis 
./mynewnameis
```
</details>

---------------------------------

#### [1. Silence Is Argument Carried Out By Other Means](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/1-args.c)

Write a program that prints the number of arguments passed into it.

 - Your program should print a number, followed by a new line

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89
1-args.c -o nargs

mathieu@ubuntu:~/argc, argv$ ./nargs 
0

mathieu@ubuntu:~/argc, argv$ ./nargs hello
1

mathieu@ubuntu:~/argc, argv$ ./nargs "hello, world"
1

mathieu@ubuntu:~/argc, argv$ ./nargs hello, world
2
```
</details>

----------------------------

#### [2. The Best Argument Against Democracy Is A Five-Minute Conversation With The Average Voter](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/2-args.c)

Write a program that prints all arguments it receives.

 - All arguments should be printed, including the first one
 - Only print one argument per line, ending with a new line

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-args.c -o args

mathieu@ubuntu:~/argc, argv$ ./args 
./args

mathieu@ubuntu:~/argc, argv$ ./args You can do anything, but not everything.
./args
You
can
do
anything,
but
not
everything.
```
</details>

---------------------------

#### [3. Neither Irony Nor Sarcasm Is Argument](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/3-mul.c)

Write a program that multiplies two numbers.

 - Your program should print the result of the multiplication, followed by a new line
 - You can assume that the two numbers and result of the multiplication can be stored in an integer
 - If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return `1`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-mul.c -o mul
mathieu@ubuntu:~/argc, argv$ ./mul 2 3
6

mathieu@ubuntu:~/argc, argv$ ./mul 2 -3
-6

mathieu@ubuntu:~/argc, argv$ ./mul 2 0
0

mathieu@ubuntu:~/argc, argv$ ./mul 245 3245342
795108790

mathieu@ubuntu:~/argc, argv$ ./mul
Error
```
</details>

-------------------------------

#### [4. To Infinity And Beyond](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/4-add.c)

Write a program that adds positive numbers.

 - Print the result, followed by a new line
 - If no number is passed to the program, print `0`, followed by a new line
 - If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
 - You can assume that numbers and the addition of all the numbers can be stored in an `int`

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-add.c -o add
mathieu@ubuntu:~/argc, argv$ ./add 1 1
2

mathieu@ubuntu:~/argc, argv$ ./add 1 10 100 1000
1111

mathieu@ubuntu:~/argc, argv$ ./add 1 2 3 e 4 5
Error

mathieu@ubuntu:~/argc, argv$ ./add
0
```
</details>

---------------------------------

#### [5. Minimal Number Of Coins For Change](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x0A-argc_argv/100-change.c)

Write a program that prints the minimum number of coins to make change for an amount of money.

- Usage: `./change cents`
- where `cents` is the amount of cents you need to give back
- if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`
- you should use `atoi` to parse the parameter passed to your program
- If the number passed as the argument is negative, print `0`, followed by a new line
- You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent

<details>
<summary> Test File </summary>
<br>

```c++
mathieu@ubuntu:~/argc, argv$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-change.c -o change
mathieu@ubuntu:~/argc, argv$ ./change 
Error

mathieu@ubuntu:~/argc, argv$ ./change 10
1

mathieu@ubuntu:~/argc, argv$ ./change 100
4

mathieu@ubuntu:~/argc, argv$ ./change 101
5

mathieu@ubuntu:~/argc, argv$ ./change 13
3
```
</details>

-----------------------------------

## Author

- Mathieu Morel
