# C - HELLO, WORLD

![img](https://s3.amazonaws.com/intranet-projects-files/holbertonschool-low_level_programming/212/cisfun.jpg)

## RESOURCES

### Read or watch :

- [Everything You Need To Know To Start With C.pdf](https://intranet.hbtn.io/rltoken/XD2enUOSVFbnWTe9TeMy-A)

- [Dennis Ritchie](https://intranet.hbtn.io/rltoken/z_bMXWzGREPdNusi75hIaA)

- ["C" Programming Language : Brian Kernighan](https://intranet.hbtn.io/rltoken/ALlxQP48pUddRMMOU9IYrw)

- [Why C Programming Is Awesome](https://intranet.hbtn.io/rltoken/jeQhdiiq4EemF-jlzBCHKw)

- [Learning To Program In C Part 1](https://intranet.hbtn.io/rltoken/y-sbT9uSCGF6ml1ZPOvyJg)

- [Learning To Program In C Part 2](https://intranet.hbtn.io/rltoken/r3mDdJIpJHmu4TdJBV95gQ)

- [Understanding C Program Compilation Process](https://intranet.hbtn.io/rltoken/tjRducuDVR9ftHsOFxdYmw)

- [Betty Coding Style](https://intranet.hbtn.io/rltoken/GQphLz55nty5zAzT6XAkOA)

- [Hash-bang Under The Hood](https://intranet.hbtn.io/rltoken/3g2P7dlYovV0nY7Caeylnw)

- [Linus Torvalds On C vs. C++](https://intranet.hbtn.io/rltoken/fXapDTlCYs_KsVAJhxfz6A)


-------------------------
                                                          
# TASKS

### [0. PREPROCESSOR](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/hello_world/0-preprocessor)

Write a script that runs a C file through the preprocessor and save the result into another file.

  - The C file name will be saved in the variable $CFILE

  - The output should be saved in the file c

----------------------------

### [1. COMPILER](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/hello_world/1-compiler)

Write a script that compiles a C file but does not link.

  - The C file name will be saved in the variable $CFILE

  - The output file should be named the same as the C file, but with the extension .o instead of .c.

     - Example: if the C file is main.c, the output file should be main.o

---------------------------

### [2. ASSEMBLER](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/hello_world/2-assembler)

Write a script that generates the assembly code of a C code and save it in an output file.

  - The C file name will be saved in the variable $CFILE

  - The output file should be named the same as the C file, but with the extension .s instead of .c.

    - Example: if the C file is main.c, the output file should be main.s

-----------------------------

### [3. NAME](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/hello_world/3-name)

Write a script that compiles a C file and creates an executable named cisfun.

  - The C file name will be saved in the variable $CFILE

-------------------------------

### [4. HELLO, PUTS](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/hello_world/4-puts.c)

Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

  - Use the function puts

  - You are not allowed to use printf

  - Your program should end with the value 0

------------------------------

### [5. HELLO, PRINTF](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/hello_world/5-printf.c)

Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

  - Use the function printf

  - You are not allowed to use the function puts

  - Your program should return 0
  
  - Your program should compile without warning when using the -Wall gcc option

-------------------------------

### [6. SIZE IS NOT GRANDEUR, AND TERRITORY DOES NOT MAKE A NATION](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/hello_world/6-size.c)

Write a C program that prints the size of various types on the computer it is compiled and run on.

  - You should produce the exact same output as in the example

  - Warnings are allowed

  - Your program should return 0

  - You might have to install the package libc6-dev-i386 on your Linux (Vagrant) to test the -m32 gcc option

------------------------------

### [7. INTEL](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/hello_world/100-intel)

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

  - The C file name will be saved in the variable $CFILE.

  - The output file should be named the same as the C file, but with the extension .s instead of .c.

    - Example: if the C file is main.c, the output file should be main.s

----------------------------

### [8. UNIX IS BASICALLY A SIMPLE OPERATING SYSTEM, BUT YOU HAVE TO BE A GENIUS TO UNDERSTAND THE SIMPLICITY](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/hello_world/101-quote.c)

Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error.

  - You are not allowed to use any functions listed in the NAME section of the man (3) printf or man (3) puts

  - Your program should return 1

  - Your program should compile without any warnings when using the -Wall gcc option

