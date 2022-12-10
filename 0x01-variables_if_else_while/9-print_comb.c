#include <stdio.h>
/**
 * main - Entry to the function
 *
 * Return: 0 for successful
 */

int main(void)
	{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
	}
