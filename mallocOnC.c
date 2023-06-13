#include <stdio.h>
#include <stdlib.h>
/**
 * main - introduction to malloc and free
 *
 * Return: 0.
 */

/*
* The malloc function allocates a specific number of bytes in memory and returns a pointer to the allocated memory. This memory will have read and write permissions.

* Prototype: void *malloc(size_t size);
* where void * means it is a pointer to the type of your choice
* and size is the number of bytes your need to allocate
*/
int main(void)
{
    char *str;

    str = malloc(sizeof(char) * 3);
    str[0] = 'O';
    str[1] = 'K';
    str[2] = '\0';
    printf("%s\n", str);
    return (0);
}