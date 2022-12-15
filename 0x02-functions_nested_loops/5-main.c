#include "main.h"


/**
 * main - checks whether the code is functional
 *
 * Return: 0 for succes
 */
int main(void)
{
	int r;


	r = print_sign(98);
	_putchar(',');
	_putchar('');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar('');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar('');
	_putchar(r + '0');
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar('');
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
