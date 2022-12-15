#include "main.h"


/**
 * print_sign - prints the sign of a number
 * @n: this is the int being checked
 * Return: 1 and prints + if n is more than 0 and prints -n if less than 0
 * -1 and prints -n if n is less than 0
 */
int print_sign(int n)
{
	if(n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
}

