#include <stdio.h>

/**
 * print_school - prints "Holberton"
 *
 * Return: nothing.
 */

/*
* The variable str is not a pointer, it’s an array. str does not hold the memory address of the string "Holberton", but a copy of it
* The string “Holberton” is copied into this array
*/
void print_school(void)
{
    char str[] = "Holberton";

    str[0] = 's'; //it can only be modifiable as array, a string is immutable is a read only thing.
    printf("%s\n", str);
}

/**
 *  main - concept introduction
 *
 * Return: 0.
 */
int main(void)
{
    print_school();
    return (0);
}