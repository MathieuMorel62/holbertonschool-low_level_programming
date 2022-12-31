# C - FUNCTIONS, NESTED LOOPS

![img](https://d1m75rqqgidzqn.cloudfront.net/wp-data/2020/12/15114057/shutterstock_487518850-1.jpg)

## RESOURCES

### Read or watch :

- [Nested While Loops](https://intranet.hbtn.io/rltoken/XR1FqLCngwWdV5-sOcTkYA)
- [C - Functions](https://intranet.hbtn.io/rltoken/y0tuBpspBgJ8E2STVqEPQQ)
- [Learning To Program In C (Part 06)](https://intranet.hbtn.io/rltoken/znVekiyJaZQ12d15MhS8fQ)
- [What Is A Function Prototype](https://intranet.hbtn.io/rltoken/5LM45CAPlfwlu5Q3eCctAg)
- [What Is The Purpose Of A Function Prototype ?](https://intranet.hbtn.io/rltoken/SuqVH2cku18AiywqUIrgVA)
- [C - Header Files](https://intranet.hbtn.io/rltoken/erpTD0m97ydWAVtyyGkbRA)

------------------------------

# TASKS


#### [0. _Putchar:](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/0-putchar.c)

Write a program that prints `_putchar`, followed by a new line.

  - The program should return `0`

-----------------------

#### [1. I Sometimes Suffer From Insomnia. And When I Can't Fall Asleep, I Play What I Call The Alphabet Game](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/1-alphabet.c)

Write a function that prints the alphabet, in lowercase, followed by a new line.
 
  - Prototype: `void print_alphabet(void);`
  - You can only use `_putchar` twice in your code

-----------------------

#### [2. 10 x Alphabet](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/2-print_alphabet_x10.c)

Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

  - Prototype: `void print_alphabet_x10(void);` 
  - You can only use `_putchar` twice in your code

------------------------

#### [3. Islower](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/3-islower.c)

Write a function that checks for lowercase character.

  - Prototype: int `_islower(int c);`
  - Returns `1` if `c` is lowercase
  - Returns `0` otherwise

FYI: The standard library provides a similar function: `islower`. Run `man islower` to learn more.

--------------------------

#### [4. Isalpha](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/4-isalpha.c)

Write a function that checks for alphabetic character.

  - Prototype: `int _isalpha(int c);`
  - Returns `1` if `c` is a letter, lowercase or uppercase
  - Returns `0` otherwise

FYI: The standard library provides a similar function: `isalpha`. Run `man isalpha` to learn more.

----------------------------

#### [5. Sign](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/5-sign.c)

Write a function that prints the sign of a number.

  - Prototype: `int print_sign(int n);`
  - Returns `1` and prints `+` if `n` is greater than zero
  - Returns `0` and prints `0` if `n` is zero
  - Returns `-1` and prints `-` if `n` is less than zero

------------------------------

#### [6. There Is No Such Thing As Absolute Value In This World. You Can Only Estimate What a Thing Is Worth To You](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/6-abs.c)

Write a function that computes the absolute value of an integer.

  - Prototype: `int _abs(int);`

FYI: The standard library provides a similar function: `abs`. Run `man abs` to learn more.

--------------------------

#### [7. There Are Only 3 Colors, 10 Digits, And 7 Notes; It's What We Do With Them That's Important](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/7-print_last_digit.c)

Write a function that prints the last digit of a number.

  - Prototype: `int print_last_digit(int);`
  - Returns the value of the last digit

------------------------------------

#### [8. I'm Federal Agent Jack Bauer, And Today Is The Longest Day Of My Life](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/8-24_hours.c)

Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

  - Prototype: `void jack_bauer(void);`
  - You can listen to [this soundtrack](https://intranet.hbtn.io/rltoken/mJ7JsWWRo9nxTuauK1Uyuw) while coding :)

------------------------------

#### [9. Learn Your Times Table](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/9-times_table.c)

Write a function that prints the 9 times table, starting with 0.

  - Prototype: `void times_table(void);`

----------------------------------

#### [10. A + B](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/10-add.c)

Write a function that adds two integers and returns the result.

  - Prototype: `int add(int, int);`

-----------------------------

#### [11. 98 Battery Street, The OG](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/11-print_to_98.c)

Write a function that prints all natural numbers from `n` to `98`, followed by a new line.

  - Prototype: `void print_to_98(int n);`
  - Numbers must be separated by a comma, followed by a space
  - Numbers should be printed in order
  - The first printed number should be the number passed to your function
  - The last printed number should be `98`
  - You are allowed to use the standard library

------------------------------------

#### [12. The World Looks Like a Multiplication-Table, Or a Mathematical Equation, Which, Turn It How You Will, Balances Itself](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/100-times_table.c)

Write a function that prints the n times table, starting with 0.

  - Prototype: `void print_times_table(int n);
  - If `n` is greater than `15` or less than `0` the function should not print anything

---------------------

#### [13. Nature made The Natural Numbers; All Else Is The Work Of Women](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/101-natural.c)

If we list all the natural numbers below `10` that are multiples of `3` or `5`, we get `3`, `5`, `6` and `9`. The sum of these multiples is `23`. Write a program that computes and prints the sum of all the multiples of `3` or `5` below `1024` (excluded), followed by a new line.

  - You are allowed to use the standard library
  
---------------------------------

#### [14. In Computer Class, The First Assignment Was To Write a Program To Print The First 100 Fibonacci Numbers. Instead, I Wrote a Program That Would Steal Passwords Of Students. My Teacher Gave Me An A](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/functions_nested_loops/102-fibonacci.c)

Write a program that prints the first 50 Fibonacci numbers, starting with `1` and `2`, followed by a new line.

  - The numbers must be separated by comma, followed by a space `,` 
  - You are allowed to use the standard library

-----------------------

#### [15. Even Liber Abbaci](url)

Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with `1` and `2`, the first 10 terms will be: `1`, `2`, `3`, `5`, `8`, `13`, `21`, `34`, `55`, `89`. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.

  - You are allowed to use the standard library
  
-----------------------

#### [16. In Computer Class, The First Assignment Was To Write a Program To Print The First 100 Fibonacci Numbers. Instead, I Wrote a Program That Would Steal Passwords Of Students. My Teacher Gave Me An A+](url)

Write a program that finds and prints the first 98 Fibonacci numbers, starting with `1` and `2`, followed by a new line.

  - The numbers should be separated by comma, followed by a space ,
  - You are allowed to use the standard library
  - You are not allowed to use any other library (You can’t use `GMP` etc…)
  - You are not allowed to use `long long`, `malloc`, pointers, arrays/tables, or structures
  - You are not allowed to hard code any Fibonacci number (except for `1` and `2`)
  
-----------------------
