#include "main.h"

/**
 * puts2 - function that prints one character out of every two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int k = 0;
	int l = 0;
	char *m = str;
	int n;

	while (*m != '\0')
	{
		m++;
		k++;
	}
	l = k - 1;
	for (n = 0; n <= l; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
		_putchar('\n');
}
