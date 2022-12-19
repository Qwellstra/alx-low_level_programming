#include "main.h"

/**
 * rev_string - reverses a given string
 * @s: input string
 * Return: returns the string sorted in reverse
 */
void rev_string(char *s)
{
	char a = s[0];
	int b = 0;
	int i;

	while (s[b] != '\0')
	counter++;
	for (i = 0; i < b; i++)
	{
		b--;
		a = s[i];
		s[i] = s[b];
		s[b] = a;
	}
}
