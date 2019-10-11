# Hash Tables

## Requirements
* Allowed editors: vi, vim, emacs
* All the files will be compiled on Ubuntu 14.04 LTS
* The programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All the files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Not allowed to use global variables
* No more than 5 functions per file
* Not allowed to use the C standard library
* The prototypes of all the functions should be included in the header file called hash_tables.h
* All the header files should be include guarded

## Compilation
`$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-hash_table_create.c -o c`

`$ Betty <file name>`

## Example
```#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}
$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 1-djb2.c 2-key_index.c -o c
$ ./c 
6953392314605
237
3749890792216096085
341
5861846
470
```

## Tasks
* Write a function that creates a hash table.
* Write a hash function implementing the djb2 algorithm.
* Write a function that gives you the index of a key.
* Write a function that adds an element to the hash table.
* Write a function that retrieves a value associated with a key.
* Write a function that prints a hash table.
* Write a function that deletes a hash table.
