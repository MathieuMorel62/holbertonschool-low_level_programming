# C - VARIABLES, IF, ELSE, WHILE

<img src="https://www.mrvermainstitute.com/wp-content/uploads/2022/04/C-progamming.jpg" width="100%">

## Description
### Variables

In C, variables are used to store data values. Variables are declared with a specific data type, such as `int`, `float`, or `char`, and are given a unique name. For example, the following code declares an integer variable named `x` and assigns it the value of 5:

```C++
int x = 5;
```

### Conditional Statements

C allows for the use of conditional statements, such as `if`, `else`, and `else if`, to control the flow of the program. For example, the following code checks if the variable `x` is greater than 10 and, if so, prints "`x` is greater than 10".

```c++
if (x > 10) {
    printf("x is greater than 10");
}
```

### Loops

C also allows for the use of loops, such as `while` or `for`, to repeatedly execute a block of code. For example, the following code will print the numbers from 1 to 10:

```c++
int i = 1;
while (i <= 10) {
    printf("%d\n", i);
    i++;
}
```

The `for` loop is similar to the `while` loop, but with a more concise syntax

```c++
for(int i = 0; i < 10; i++){
  printf("%d",i);
}
```

These are just a few examples of the basic building blocks of C programming, and it can be used for many more things. C is a powerful and versatile language that can be used for a wide range of applications.

## RESOURCES
### Read or Watch :

- [Everything You Need To Know To Start With C.pdf](https://intranet.hbtn.io/rltoken/eQnlX5zRiOACgE8lhB8RIA)
- [Keywords And Identifiers](https://intranet.hbtn.io/rltoken/CJPUuNKHthtvZgImtEVvXA)
- [Integers](https://intranet.hbtn.io/rltoken/L62RbK4buoJpukZpGiYo4w)
- [Arithmetic Operator In C](https://intranet.hbtn.io/rltoken/WYLsq9-VLs8EkYxZepIdcg)
- [If Statements In C](https://intranet.hbtn.io/rltoken/yuTsh0MB6AzC2L43xX9mJQ)
- [If...Else Statement](https://intranet.hbtn.io/rltoken/4V25mIXrXwCPCw5N6l9h8A)
- [Relational Operators](https://intranet.hbtn.io/rltoken/MVF9PuY_IAVw5fh79b6lww)
- [Logical Operators](https://intranet.hbtn.io/rltoken/cXHabNX4LDOIukdeaRqlfQ)
- [While Loop In C](https://intranet.hbtn.io/rltoken/FxPxfoKS2AVjvrSGQQKY0g)
- [While Loop](https://intranet.hbtn.io/rltoken/zqJKmSFQD8nlNSDnGcU7AQ)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)

--------------------------

# TASKS

#### [0. Positive Anything Is Better Than Negative Nothing](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/0-positive_or_negative.c)

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print whether the number stored in the variable `n` is positive or negative.

  - You can find the source code [here](https://intranet.hbtn.io/rltoken/c70eE2D1JbdTtyuhDsuYzQ)
  - The variable `n` will store a different value every time you will run this program
  - You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code
  - The output of the program should be:
    - The number, followed by 
      - if the number is greater than 0: `is positive`
      - if the number is 0: `is zero`
      - if the number is less than 0: `is negative`
  - Followed by a new line

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-positive_or_negative.c -o 0-positive_or_negative
mathieu@ubuntu:~/$ ./0-positive_or_negative 
-520693284 is negative

mathieu@ubuntu:~/$ ./0-positive_or_negative 
-973398895 is negative

mathieu@ubuntu:~/$ ./0-positive_or_negative 
-199220452 is negative

mathieu@ubuntu:~/$ ./0-positive_or_negative
561319348 is positive

mathieu@ubuntu:~/$ ./0-positive_or_negative 
561319348 is positive

mathieu@ubuntu:~/$ ./0-positive_or_negative 
266853958 is positive

mathieu@ubuntu:~/$ ./0-positive_or_negative 
-48147767 is negative

mathieu@ubuntu:~/$ ./0-positive_or_negative
0 is zero
```
</details>

---------------------------------

#### [1. The Last Digit](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/1-last_digit.c)

This program will assign a random number to the variable `n` each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable `n`.

  - You can find the source code [here](https://intranet.hbtn.io/rltoken/tixh4GPxzFzXN1VdXQYt5A)
  - The variable `n` will store a different value every time you run this program
  - You don’t have to understand what `rand`, `srand`, and `RAND_MAX` do. Please do not touch this code
  - The output of the program should be:
    - The string `Last digit of`, followed by
    - `n`, followed by
    - the string `is`, followed by
      - if the last digit of `n` is greater than 5: the string `and is greater than 5`
      - if the last digit of `n` is 0: the string `and is 0`
      - if the last digit of `n` is less than 6 and not 0: the string `and is less than 6 and not 0`
    - followed by a new line

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-last_digit.c -o 1-last_digit
mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5

mathieu@ubuntu:~/$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
```
</details>

------------------------------

#### [2. I Sometimes Suffer From Insomnia. And When I Can't Fall Asleep, I Play What I Call The Alphabet Game](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/2-print_alphabet.c)

Write a program that prints the alphabet in lowercase, followed by a new line.

  - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  - All your code should be in the `main` function
  - You can only use `putchar` twice in your code

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-print_alphabet.c -o 2-print_alphabet
mathieu@ubuntu:~/$ ./2-print_alphabet

abcdefghijklmnopqrstuvwxyz
```
</details>

----------------------------

#### [3. Alphabet](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/3-print_alphabets.c)

Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.

  - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  - All your code should be in the `main` function
  - You can only use `putchar` three times in your code

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-print_alphabets.c -o 3-print_alphabets
mathieu@ubuntu:~/$ ./3-print_alphabets | cat -e

abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
```
</details>

---------------------------

#### [4. When I Was Having That Alphabet Soup, I Never Throught That It Would Pay Off](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/4-print_alphabt.c)

Write a program that prints the alphabet in lowercase, followed by a new line.

  - Print all the letters except `q` and `e` 
  - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  - All your code should be in the `main` function
  - You can only use `putchar` twice in your code

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-print_alphabt.c -o 4-print_alphabt
mathieu@ubuntu:~/$ ./4-print_alphabt

abcdfghijklmnoprstuvwxyz
```
</details>

-------------------------------

#### [5. Numbers](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/5-print_numbers.c)

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

  - All your code should be in the `main` function

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-print_numbers.c -o 5-print_numbers
mathieu@ubuntu:~/$ ./5-print_numbers 

0123456789
```
</details>

----------------------------------

#### [6. Numberz](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/6-print_numberz.c)

Write a program that prints all single digit numbers of base 10 starting from `0`, followed by a new line.

  - You are not allowed to use any variable of type `char`
  - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  - You can only use `putchar` twice in your code
  - All your code should be in the `main` function

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-print_numberz.c -o 6-print_numberz
mathieu@ubuntu:~/$ ./6-print_numberz 

0123456789
```
</details>

-----------------------------

#### [7. Smile In The Mirror](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/7-print_tebahpla.c)

Write a program that prints the lowercase alphabet in reverse, followed by a new line.

  - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  - All your code should be in the `main` function
  - You can only use `putchar` twice in your code

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-print_tebahpla.c -o 7-print_tebahpla
mathieu@ubuntu:~/$ ./7-print_tebahpla

zyxwvutsrqponmlkjihgfedcba
```
</details>

-------------------------------

#### [8. Hexadecimal](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/8-print_base16.c)

Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.

  - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  - All your code should be in the `main` function
  - You can only use `putchar` three times in your code

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-print_base16.c -o 8-print_base16
mathieu@ubuntu:~/$ ./8-print_base16

0123456789abcdef
```
</details>

--------------------------

#### [9. Patience, Persistence And Perspiration Make An Unbeatable Combination For Success](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/9-print_comb.c)

Write a program that prints all possible combinations of single-digit numbers.

  - Numbers must be separated by `,` , followed by a space
  - Numbers should be printed in ascending order
  - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  - All your code should be in the `main` function
  - You can only use `putchar` four times maximum in your code
  - You are not allowed to use any variable of type `char`
  
<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-print_comb.c -o 9-print_comb
mathieu@ubuntu:~/$ ./9-print_comb | cat -e

0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
```
</details>

------------------------------
  
#### [10. Inventing Is A Combination Of Brains And Materials. The More Brains You Use, The Less Material You Need](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/100-print_comb3.c)
  
  - Numbers must be separated by `,` , followed by a space
  - The two digits must be different
  - `01` and `10` are considered the same combination of the two digits `0` and `1`
  - Print only the smallest combination of two digits
  - Numbers should be printed in ascending order, with two digits
  - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
  - You can only use `putchar` five times maximum in your code
  - You are not allowed to use any variable of type `char`
  - All your code should be in the `main` function

<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-print_comb3.c -o 100-print_comb3
mathieu@ubuntu:~/$ ./100-print_comb3

01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
```
</details>

------------------------------------

#### [11. The Success Combination In Business Is: Do What You Do Better... And: Do More Of What You Do...](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/101-print_comb4.c)
Write a program that prints all possible different combinations of three digits.

 - Numbers must be separated by `,` , followed by a space
 - The three digits must be different
 - `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
 - Print only the smallest combination of three digits
 - Numbers should be printed in ascending order, with three digits
 - You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
 - You can only use `putchar` six times maximum in your code
 - You are not allowed to use any variable of type `char`
 - All your code should be in the `main` function
 
<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-print_comb4.c -o 101-print_comb4
mathieu@ubuntu:~/$ ./101-print_comb4

012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789
```
</details>

--------------------------------------------

#### [12. Software Is Eating The World](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x01-variables_if_else_while/102-print_comb5.c)

Write a program that prints all possible combinations of two two-digit numbers.

 - The numbers should range from `0` to `99`
 - The two numbers should be separated by a space
 - All numbers should be printed with two digits. `1` should be printed as `01`
 - The combination of numbers must be separated by comma, followed by a space
 - The combinations of numbers should be printed in ascending order
 - `00 01` and `01 00` are considered as the same combination of the numbers `0` and `1`
 - You can only use the `putchar` function (every other function (printf, puts, etc…) is forbidden)
 - You can only use `putchar` eight times maximum in your code
 - You are not allowed to use any variable of type `char`
 - All your code should be in the `main` function
 
<details>
<summary> File Compilation / Test </summary>
<br>

```c++
mathieu@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 102-print_comb5.c -o 102-print_comb5
mathieu@ubuntu:~/$ ./102-print_comb5

00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
```
</details>

------------------------------------------

## AUTHOR

- Mathieu Morel
