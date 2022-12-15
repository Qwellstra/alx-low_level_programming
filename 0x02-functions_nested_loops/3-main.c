#include "main.h"


/**
 * main - it performs checks on the code
 *
 * Return: 0 for success
 */
int main(void)
{
	int r;


	r = _islower('H');
	_putchar(r +'0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	return (0);
}
