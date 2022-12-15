#include <stdio.h>
#include "main.h"


/**
 * print_to_98 - prints all natural numbers from n to 98
 * this is followed by a newline
 * @n: printing this number
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, " n++);
		printf("%d\n");
	}
}
