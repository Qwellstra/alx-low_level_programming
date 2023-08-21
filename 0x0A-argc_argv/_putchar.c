#include <stdio.h>
#inlcude "main.h"
/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 *
 * Return: 1 for success
 * On error, return -1 with appropriate error no.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
