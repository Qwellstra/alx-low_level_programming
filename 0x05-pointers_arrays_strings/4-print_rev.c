#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a newline
 * @s: string to be printed
 * Return: always 0
 */
void print_rev(char *s)
{
	int a = 0;
	int o;

	while (*s != '\0')
	{
		a++;
		s++;
	}
	s--;
	for (o = a; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
