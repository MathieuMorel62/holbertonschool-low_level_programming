# C - MAKEFILES

<img src="https://res.cloudinary.com/practicaldev/image/fetch/s--QQoKKPdY--/c_imagga_scale,f_auto,fl_progressive,h_420,q_auto,w_1000/https://dev-to-uploads.s3.amazonaws.com/i/0t3fdxw9v0iy0aw44fil.png" width="100%">

## Description
### Introduction to Makefiles in C

Makefiles are a powerful tool for automating the building and compilation process of C projects. They allow you to define dependencies between files and the commands necessary to generate executables.

**Here's an example of a simple makefile:**

```makefile
all: main

main: main.c helper.c
    gcc -o main main.c helper.c

clean:
    rm -f main
```

This makefile contains two rules: **all** and **clean**. The **all** rule depends on **main**, which is the name of the generated executable. The **main** rule depends on **main.c** and **helper.c**, which are the source files. The command **gcc -o main main.c helper.c** is used to compile the source files and generate the executable. The **clean** rule allows to remove the generated executables.  
  
To run the makefile, you can use the `make` command in your terminal. For example, to generate the executable, you can use the command `make all`. To clean the generated files, you can use the command `make clean`.  
  
Makefiles can also include additional functionality such as handling different build configurations, creating object files, and handling dependencies between multiple executables.  
  
It's worth noting that `makefiles` are not specific to C, but can be used for any kind of projects that requires build automation.  
  
It's a good practice to include a makefile in your project so that other developers can easily build and run your code without having to manually set up the build process.  

## RESOURCES
### Read or Watch : 

- [Makefile](https://intranet.hbtn.io/rltoken/OPQoR8DQTSqs9jEKsgCqRw)
- [Makefile Tutorial](https://intranet.hbtn.io/rltoken/OXlC1NnImsC2c4zz3vnHIA)

## Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- OS: Ubuntu 20.04 LTS
- Version of `gcc`: 9.3.0
- Version of `make`: GNU Make 4.2.1
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory

## More Info
### Files
**The following are very important steps**  
- In the following tasks, we are going to use [these files](https://github.com/hs-hq/0x1B.c). We want to compile these only.
- You can either create the files of the repository into your project folder **(makefiles)** and copy paste their content from github OR you can clone the **0x1B.c** repository into the **makefiles** folder.
- If you’re going to clone it, you should enter the **makefiles** folder and **inside this folder** delete the **.git** folder using this command `rm -rf .git` then move the files from this folder into the **makefiles** folder to test your work.

------------------------------

 # TASKS


#### [0. Make -f 0 - Makefile](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x03-makefiles/0-Makefile)

Create your first Makefile.
Requirements :
  - name of the executable: `school`
  - rules: `all`	
    - The `all` rule builds your executable	
  - variables: none

<details>
<summary>Test File</summary>
<br>

```makefile
mathieu@ubuntu:~/Makefiles$ make -f 0-Makefile 
gcc main.c school.c -o school
mathieu@ubuntu:~/Makefiles$ ./school 

j#0000000000000000000000000000000000000
j#000000000000000000@Q**g00000000000000
j#0000000000000000*]++]4000000000000000
j#000000000000000k]++]++*N#000000000000
j#0000000000000*C+++]++]++]J*0000000000
j#00000000000@+]++qwwwp=]++++]*00000000
j#0000000000*+++]q#0000k+]+]++]4#000000
j#00000000*C+]+]w#0000*]+++]+]++0000000
j#0000we+]wW000***C++]++]+]++++40000000
j#000000000*C+]+]]+]++]++]++]+q#0000000
j#0000000*]+]+++++++]++]+++]+++J0000000
j#000000C++]=]+]+]+]++]++]+]+]+]=000000
j#00000k+]++]+++]+]++qwW0000000AgW00000
j#00000k++]++]+]+++qW#00000000000000000
j#00000A]++]++]++]++J**0000000000000000
j#000000e]++]+++]++]++]J000000000000000
j#0000000A]++]+]++]++]++000000000000000
j#000000000w]++]+]++]+qW#00000000000000
j#00000000000w]++++]*0##000000000000000
j#0000000000000Ag]+]++*0000000000000000
j#00000000000000000we]+]Q00000000000000
j#0000000000000@@+wgdA]+J00000000000000
j#0000000000000k?qwgdC=]4#0000000000000
j#00000000000000w]+]++qw#00000000000000
"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
```
</details>

----------------------------

#### [1. Make -f 1 - Makefile](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x03-makefiles/1-Makefile)

Requirements :
  - name of the executable: `school`	
  - rules: `all`
    - The `all` rule builds your executable	
  - variables: `CC`, `SRC`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files

<details>
<summary>Test File</summary>
<br>

```makefile
mathieu@ubuntu:~/Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school

mathieu@ubuntu:~/Makefiles$ make -f 1-Makefile
gcc main.c school.c -o school
```
</details>

--------------------------------

#### [2. Make -f 2 - Makefile](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x03-makefiles/2-Makefile)

Requirements :
  - name of the executable: `school`
  - rules: `all`
    - The `all` rule builds your executable
  - variables: `CC`, `SRC`, `OBJ`, `NAME`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
  - The `all` rule should recompile only the updated source files
  - You are not allowed to have a list of all the `.o` files

<details>
<summary> File Compilation / Test </summary>
<br>

```makefile
mathieu@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school

mathieu@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc main.o school.o -o school

mathieu@ubuntu:~/Makefiles$ echo "/* School */" >> main.c

mathieu@ubuntu:~/Makefiles$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o school.o -o school
```
</details>

--------------------------

#### [3. Make - f 3 - Makefile](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x03-makefiles/3-Makefile)
Requirements :
  - name of the executable: `school`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
  - The `all` rule should recompile only the updated source files
  - The `clean`, `oclean`, `fclean`, `re` rules should never fail
  - You are not allowed to have a list of all the `.o` files

<details>
<summary>Test File</summary>
<br>

```makefile
mathieu@ubuntu:~//Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school.c
main.c
main.c~
m.h

mathieu@ubuntu:~/Makefiles$ make -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school

mathieu@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school

mathieu@ubuntu:~/Makefiles$ ls -1
0-Makefile
1-Makefile
2-Makefile
3-Makefile
school
school.c
school.o
main.c
main.c~
main.o
m.h

mathieu@ubuntu:~/Makefiles$ make clean -f 3-Makefile 
rm -f *~ school

mathieu@ubuntu:~/Makefiles$ make oclean -f 3-Makefile 
rm -f main.o school.o

mathieu@ubuntu:~/Makefiles$ make fclean -f 3-Makefile 
rm -f *~ school
rm -f main.o school.o

mathieu@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school

mathieu@ubuntu:~/Makefiles$ make all -f 3-Makefile
gcc main.o school.o -o school

mathieu@ubuntu:~/Makefiles$ make re -f 3-Makefile
rm -f main.o school.o
gcc    -c -o main.o main.c
gcc    -c -o school.o school.c
gcc main.o school.o -o school
```
</details>

--------------------------------

#### [4. A Complete Makefile](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x03-makefiles/4-Makefile)

Requirements : 
  - name of the executable: `school`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    - `CC`: the compiler to be used
    - `SRC`: the `.c` files
    - `OBJ`: the `.o` files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
    - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
  - The `all` rule should recompile only the updated source files
  - The `clean`, `oclean`, `fclean`, `re` rules should never fail
  - You are not allowed to have a list of all the `.o` files      

<details>
<summary>Test File</summary>
<br>

```makefile
mathieu@ubuntu:~/Makefiles$ make all -f 4-Makefile
gcc -Wall -Werror -Wextra -pedantic   -c -o main.o main.c
gcc -Wall -Werror -Wextra -pedantic   -c -o school.o school.c
gcc main.o school.o -o school
```
</details>

------------------------------

#### [5. Make -f 100 - Makefile](https://github.com/MathieuMorel62/holbertonschool-low_level_programming/blob/master/0x03-makefiles/100-Makefile)

Requirements :
  - name of the executable: `school`
  - rules: `all`, `clean`, `oclean`, `fclean`, `re`
    - `all`: builds your executable
    - `clean`: deletes all Emacs and Vim temporary files along with the executable
    - `oclean`: deletes the object files
    - `fclean`: deletes all Emacs and Vim temporary files, the executable, and the object files
    - `re`: forces recompilation of all source files
  - variables: `CC`, `SRC`, `OBJ`, `NAME`, `RM`, `CFLAGS`
    - `CC`: the compiler to be used
    - `SRC`: the .c files
    - `OBJ`: the .o files
    - `NAME`: the name of the executable
    - `RM`: the program to delete files
    - `CFLAGS`: your favorite compiler flags: `-Wall -Werror -Wextra -pedantic`
  - The `all` rule should recompile only the updated source files
  - The `clean`, `oclean`, `fclean`, `re` rules should never fail
  - You are not allowed to have a list of all the `.o` files
  - You have to use `$(RM)` for the cleaning up rules, but you are not allowed to set the `RM` variable
  - You are not allowed to use the string `$(CC)` more than once in your Makefile
  - You are only allowed to use the string `$(RM)` twice in your Makefile   
  - You are not allowed to use the string `$(CFLAGS)` (but the compiler should still use the flags you set in this variable)
  - You are not allowed to have an `$(OBJ)` rule
  - You are not allowed to use the `%.o: %.c` rule
  - Your Makefile should work even if there is a file in the folder that has the same name as one of your rule
  - Your Makefile should not compile if the header file `m.h` is missing        

-------------------------------------------

## AUTHOR

- Mathieu Morel
