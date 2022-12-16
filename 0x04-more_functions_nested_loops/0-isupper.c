#include "main.h"

/**
 * _isupper - checks if the char is uppercase or lowercase
 * @c: input character
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
