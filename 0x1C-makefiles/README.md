# Makefiles

## Requirements
* Allowed editors: vi, vim, emacs
* OS: Ubuntu 14.04 LTS
* Version of gcc: 4.8.4
* Version of make: GNU Make 3.81
* All the files should end with a new line

## Compilation
`$ make -f <filename>`

## Example
```
$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc    -c -o holberton.o holberton.c
gcc main.o holberton.o -o holberton
$ make -f 2-Makefile
gcc main.o holberton.o -o holberton
$ echo "/* Holberton */" >> main.c
$ make -f 2-Makefile
gcc    -c -o main.o main.c
gcc main.o holberton.o -o holberton
```
## Tasks
* Create a Makefile with these requirements:
	- name of the executable: holberton
	- rules: all, clean, fclean, oclean, re
		* all: builds your executable
		* clean: deletes all Emacs and Vim temporary files along with the executable
		* oclean: deletes the object files
		* fclean: deletes the Emacs temporary files, the executable, and the object files
		* re: forces recompilation of all source files
	- variables: CC, SRC, OBJ, NAME, RM, CFLAGS
		* CC: the compiler to be used
		* SRC: the .c files
		* OBJ: the .o files
		* NAME: the name of the executable
		* RM: the program to delete files
		* CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
	- The all rule should recompile only the updated source files
	- The clean, oclean, fclean, re rules should never fail
	- You are not allowed to have a list of all the .o files
