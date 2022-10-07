                                                   C - FUNCTIONS, NESTED LOOPS

RESOURCES

Read or watch :

=> Nested While Loops  ----->  https://intranet.hbtn.io/rltoken/XR1FqLCngwWdV5-sOcTkYA

=> C - Functions  ----->  https://intranet.hbtn.io/rltoken/y0tuBpspBgJ8E2STVqEPQQ

=> Learning To Program In C (Part 06)  ----->  https://intranet.hbtn.io/rltoken/znVekiyJaZQ12d15MhS8fQ

=> What Is A Function Prototype  ----->  https://intranet.hbtn.io/rltoken/5LM45CAPlfwlu5Q3eCctAg

=> What Is The Purpose Of A Function Prototype ?  ----->  https://intranet.hbtn.io/rltoken/SuqVH2cku18AiywqUIrgVA

=> C - Header Files  ----->  https://intranet.hbtn.io/rltoken/erpTD0m97ydWAVtyyGkbRA



                                                               TASKS


0. _PUTCHAR:

   Write a program that prints _putchar, followed by a new line.

            => The program should return 0


1. I SOMETIMES SUFFER FROM INSOMNIA. AND WHEN I CAN'T FALL ASLEEP, I PLAY WHAT I CALL THE ALPHABET GAME

   Write a function that prints the alphabet, in lowercase, followed by a new line.
 
            => Prototype: void print_alphabet(void);

            => You can only use _putchar twice in your code


2. 10 x ALPHABET

   Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.

            => Prototype: void print_alphabet_x10(void); 

            => You can only use _putchar twice in your code


3. ISLOWER

   Write a function that checks for lowercase character.

            => Prototype: int _islower(int c);

            => Returns 1 if c is lowercase

            => Returns 0 otherwise

   FYI: The standard library provides a similar function: islower. Run man islower to learn more.


4. ISALPHA

   Write a function that checks for alphabetic character.

            => Prototype: int _isalpha(int c);

            => Returns 1 if c is a letter, lowercase or uppercase

            => Returns 0 otherwise

   FYI: The standard library provides a similar function: isalpha. Run man isalpha to learn more.


5. SIGN

   Write a function that prints the sign of a number.

            => Prototype: int print_sign(int n);

            => Returns 1 and prints + if n is greater than zero

            => Returns 0 and prints 0 if n is zero

            => Returns -1 and prints - if n is less than zero


6. THERE IS NO SUCH THING AS ABSOLUTE VALUE IN THIS WORLD. YOU CAN ONLY ESTIMATE WHAT A THING IS WORTH TO YOU

   Write a function that computes the absolute value of an integer.

            => Prototype: int _abs(int);

   FYI: The standard library provides a similar function: abs. Run man abs to learn more.


7. THERE ARE ONLY 3 COLORS, 10 DIGITS, AND 7 NOTES; IT'S WHAT WE DO WITH THEM THAT'S IMPORTANT

   Write a function that prints the last digit of a number.

            => Prototype: int print_last_digit(int);

            => Returns the value of the last digit


8. I'M FEDERAL AGENT JACK BAUER, AND TODAY IS THE LONGEST DAY OF MY LIFE

   Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.

            => Prototype: void jack_bauer(void);

            => You can listen to this soundtrack while coding :)  ----->  https://intranet.hbtn.io/rltoken/mJ7JsWWRo9nxTuauK1Uyuw


9. LEARN YOUR TIMES TABLE

   Write a function that prints the 9 times table, starting with 0.

            => Prototype: void times_table(void);

            => Format: see example


10. A + B

    Write a function that adds two integers and returns the result.

             => Prototype: int add(int, int);


11. 98 BATTERY STREET, THE OG

    Write a function that prints all natural numbers from n to 98, followed by a new line.

             => Prototype: void print_to_98(int n);

             => Numbers must be separated by a comma, followed by a space

             => Numbers should be printed in order

             => The first printed number should be the number passed to your function

             => The last printed number should be 98

             => You are allowed to use the standard library


12. THE WORLD LOOKS LIKE A MULTIPLICATION-TABLE, OR A MATHEMATICAL EQUATION, WHICH, TURN IT HOW WILL, BALANCES ITSELF

    Write a function that prints the n times table, starting with 0.

             => Prototype: void print_times_table(int n);

             => If n is greater than 15 or less than 0 the function should not print anything

             => Format: see example

