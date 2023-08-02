#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 for success
 * Return: -1 for error, with an error number set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
