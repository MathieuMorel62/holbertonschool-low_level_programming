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

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on `Ubuntu 20.04 LTS` using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file at the root of the repo, containing a description of the repository
- A `README.md` file, at the root of the folder of this project, containing a description of the project
- There should be no errors and no warnings during compilation
- You are not allowed to use `system`
- Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/hs-hq/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/hs-hq/Betty/blob/master/betty-doc.pl)

## More Info
### Betty Linter

To run the Betty linter just with command `betty <filename>`:

- Go to the [Betty](https://github.com/hs-hq/Betty) repository
- Clone the [repo](https://github.com/hs-hq/Betty) to your local machine
- `cd` into the Betty directory
- Install the linter with `sudo ./install.sh`
- `emacs` or `vi` a new file called `betty`, and copy the script below:

```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```

- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the betty file into /bin/ directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
  
You can now type `betty <filename>` to run the Betty linter!

-------------------------
                                                          
# TASKS

#### [0. Preprocessor](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x00-hello_world/0-preprocessor)

Write a script that runs a C file through the preprocessor and save the result into another file.

  - The C file name will be saved in the variable `$CFILE`
  - The output should be saved in the file `c`

<details>
<summary> File Compilation / test </summary>
<br>

```c++
mathieu@ubuntu:~/c/$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}

mathieu@ubuntu:~/c/$ export CFILE=main.c
mathieu@ubuntu:~/c/$ ./0-preprocessor 
mathieu@ubuntu:~/c/$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
```
</details>
    
----------------------------

#### [1. Compiler](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x00-hello_world/1-compiler)

Write a script that compiles a C file but does not link.

  - The C file name will be saved in the variable `$CFILE`
  - The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
     - Example: if the C file is `main.c`, the output file should be `main.o`

<details>
<summary> File Compilation / test </summary>
<br>

```c++
mathieu@ubuntu:~/c/$ export CFILE=main.c
mathieu@ubuntu:~/c/$ cat main.c

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}

mathieu@ubuntu:~/c/$ ./1-compiler 
mathieu@ubuntu:~/c/$ ls

0-preprocessor  1-compiler   c            main.o
Makefile               100-intel      main.c  main.s

mathieu@ubuntu:~/c/$ cat -v main.o | head
^?ELF^B^A^A^@^@^@^@^@^@^@^@^@^A^@>^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^P^B^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@@^@^K^@^H^@UHM-^IM-eM-8^@^@^@^@]M-C^@GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609^@^T^@^@^@^@^@^@^@^AzR^@^Ax^P^A^[^L^G^HM-^P^A^@^@^\^@^@^@^\^@^@^@^@^@^@^@^K^@^@^@^@A^N^PM-^F^BC^M^FF^L^G^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^D^@M-qM-^?^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^E^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^C^@^D^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^R^@^A^@^@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@main.c^@main^@^@^@^@ ^@^@^@^@^@^@^@^B^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@.symtab^@.strtab^@.shstrtab^@.text^@.data^@.bss^@.comment^@.note.GNU-stack^@.rela.eh_frame^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^[^@^@^@^A^@^@^@^F^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@@^@^@^@^@^@^@^@^K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@!^@^@^@^A^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@'^@^@^@^H^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@,^@^@^@^A^@^@^@0^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@K^@^@^@^@^@^@^@5^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@5^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@J^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^@^@^@^@^@^@^@^@8^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^H^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@E^@^@^@^D^@^@^@@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M- ^A^@^@^@^@^@^@^X^@^@^@^@^@^@^@    ^@^@^@^F^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@^Q^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^A^@^@^@^@^@^@T^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^B^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-8^@^@^@^@^@^@^@M-X^@^@^@^@^@^@^@
^@^@^@^H^@^@^@^H^@^@^@^@^@^@^@^X^@^@^@^@^@^@^@  ^@^@^@^C^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@M-^P^A^@^@^@^@^@^@^M^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@^A^@^@^@^@^@^@^@^@^@^@^@^@^@^@^@mathieu@ubuntu:~/c/$ 
```
</details>

---------------------------

#### [2. Assembler](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x00-hello_world/2-assembler)

Write a script that generates the assembly code of a C code and save it in an output file.

  - The C file name will be saved in the variable `$CFILE`
  - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    - Example: if the C file is `main.c`, the output file should be `main.s`

<details>
<summary> File Compilation / test </summary>
<br>

```c++
mathieu@ubuntu:~/c/$ export CFILE=main.c
mathieu@ubuntu:~/c/$ cat main.c

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}

mathieu@ubuntu:~/c/$ ./2-assembler
mathieu@ubuntu:~/c/$ ls

0-preprocessor  1-compiler  2-assembler c  main.c  main.s  Makefile

mathieu@ubuntu:~/c/$ cat main.s
    .file   "main.c"
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    pushq   %rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    movq    %rsp, %rbp
    .cfi_def_cfa_register 6
    movl    $0, %eax
    popq    %rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
```
</details>

-----------------------------

#### [3. Name](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x00-hello_world/3-name)

Write a script that compiles a C file and creates an executable named `cisfun`.

  - The C file name will be saved in the variable `$CFILE`

<details>
<summary> File Compilation / test </summary>
<br>

```c++
mathieu@ubuntu:~/c/$ export CFILE=main.c
mathieu@ubuntu:~/c/$ cat main.c

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}

mathieu@ubuntu:~/c/$ ./3-name 

mathieu@ubuntu:~/c/$ ls
0-preprocessor  1-compiler   3-name  cisfun  main.o  Makefile
100-intel       2-assembler  c       main.c  main.s
```
</details>

-------------------------------

#### [4. Hello, Puts](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x00-hello_world/4-puts.c)

Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

  - Use the function `puts`
  - You are not allowed to use `printf`
  - Your program should end with the value `0`

<details>
<summary> File Compilation / test </summary>
<br>

```c++
mathieu@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 4-puts.c && ./a.out
"Programming is like building a multilingual puzzle

mathieu@ubuntu:~/c/$ echo $?
0
```
</details>

------------------------------

#### [5. Hello, Printf](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x00-hello_world/5-printf.c)

Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,` , followed by a new line.

  - Use the function `printf`
  - You are not allowed to use the function `puts`
  - Your program should return `0`
  - Your program should compile without warning when using the `-Wall` `gcc` option

<details>
<summary> File Compilation / test </summary>
<br>

```c++
mathieu@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 5-printf.c

mathieu@ubuntu:~/c/$ ./a.out 
with proper grammar, but the outcome is a piece of art,

mathieu@ubuntu:~/c/$ echo $?
0
```
</details>

-------------------------------

#### [6. Size Is Not Grandeur, And Territory Does Not Make A Nation](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x00-hello_world/6-size.c)

Write a C program that prints the size of various types on the computer it is compiled and run on.

  - You should produce the exact same output as in the example
  - Warnings are allowed
  - Your program should return `0`
  - You might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32` `gcc` option

<details>
<summary> File Compilation / test </summary>
<br>

```c++
mathieu@ubuntu:~/c/$ gcc 6-size.c -m32 -o size32 2> /tmp/32
mathieu@ubuntu:~/c/$ gcc 6-size.c -m64 -o size64 2> /tmp/64

mathieu@ubuntu:~/c/$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)

mathieu@ubuntu:~/c/$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)

mathieu@ubuntu:~/c/$ echo $?
0
```
</details>

------------------------------

#### [7. Intel](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x00-hello_world/100-intel)

Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

  - The C file name will be saved in the variable `$CFILE`.
  - The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    - Example: if the C file is `main.c`, the output file should be `main.s`

<details>
<summary> File Compilation / test </summary>
<br>

```c++
mathieu@ubuntu:~/c/$ export CFILE=main.c
mathieu@ubuntu:~/c/$ cat main.c

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}

mathieu@ubuntu:~/c/$ ./100-intel
mathieu@ubuntu:~/c/$ cat main.s
    .file   "main.c"
    .intel_syntax noprefix
    .text
    .globl  main
    .type   main, @function
main:
.LFB0:
    .cfi_startproc
    push    rbp
    .cfi_def_cfa_offset 16
    .cfi_offset 6, -16
    mov rbp, rsp
    .cfi_def_cfa_register 6
    mov eax, 0
    pop rbp
    .cfi_def_cfa 7, 8
    ret
    .cfi_endproc
.LFE0:
    .size   main, .-main
    .ident  "GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.2) 5.4.0 20160609"
    .section    .note.GNU-stack,"",@progbits
```
</details>

----------------------------

#### [8. Unix Is Basically A Simple Operating System, But You Have To Be A Genius To Understand The Simplicity](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x00-hello_world/101-quote.c)

Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

  - You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
  - Your program should return 1
  - Your program should compile without any warnings when using the `-Wall` `gcc` option

<details>
<summary> File Compilation / test </summary>
<br>

```c++
mathieu@ubuntu:~/c/$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o quote 101-quote.c

mathieu@ubuntu:~/c/$ ./quote
and that piece of art is useful" - Dora Korpar, 2015-10-19

mathieu@ubuntu:~/c/$ echo $?
1

mathieu@ubuntu:~/c/$ ./quote 2> q
mathieu@ubuntu:~/c/$ cat q
and that piece of art is useful" - Dora Korpar, 2015-10-19

mathieu@ubuntu:~/c/$ grep printf < 101-quote.c
mathieu@ubuntu:~/c/$ grep put < 101-quote.c
```
</details>

-----------------------------------

## AUTHOR

- Mathieu Morel
