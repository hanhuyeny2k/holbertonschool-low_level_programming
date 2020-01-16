# Search Algorithms

## Requirements
* Allowed editors: vi, vim, emacs
* All the files will be compiled on Ubuntu 14.04 LTS
* The programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All the files should end with a new line
* A README.md file, at the root of the folder of the project, is mandatory
* The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* Not allowed to use global variables
* No more than 5 functions per file
* Only allowed to use the printf function of the standard library. Any call to another function like strdup, malloc,  is forbidden.
* In the following examples, the main.c files are shown as examples. They can be used to test the functions, but dont have to push them to the repo. We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all the functions should be included in the header file called search_algos.h
* Dont forget to push the header file
* All the header files should be include guarded

## Compilation
`gcc -Wall -Wextra -Werror -pedantic <main file> <c file> -o <new filename>`
`./<new filename>`

## Example
```
$ cat 0-main.c 
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        10, 1, 42, 3, 4, 42, 6, 7, -1, 9
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
$ gcc -Wall -Wextra -Werror -pedantic 0-main.c 0-linear.c -o 0-linear
$ ./0-linear 
Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Found 3 at index: 3

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Found 42 at index: 2

Value checked array[0] = [10]
Value checked array[1] = [1]
Value checked array[2] = [42]
Value checked array[3] = [3]
Value checked array[4] = [4]
Value checked array[5] = [42]
Value checked array[6] = [6]
Value checked array[7] = [7]
Value checked array[8] = [-1]
Value checked array[9] = [9]
Found 999 at index: -1
```
## Tasks
0) Write a function that searches for a value in an array of integers using the Linear search algorithm
1) Write a function that searches for a value in a sorted array of integers using the Binary search algorithm
2) What is the time complexity (worst case) of a linear search in an array of size n?
3) What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?
4) What is the time complexity (worst case) of a binary search in an array of size n?
5) What is the space complexity (worst case) of a binary search in an array of size n?
6) What is the space complexity of this function / algorithm?
