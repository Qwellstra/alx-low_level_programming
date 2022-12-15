#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - prints all natural numbers to 98,
 * which is then followed by a newline
 * @n: the number to print
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
