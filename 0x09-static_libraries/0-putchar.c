#include <unistd.h>


/**
 * _putchar - a function that writes char c to the stdout
 * @c: Charcter to be printed
 *
 * Return: 1 for success
 * On error, -1 is returned, and erno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
