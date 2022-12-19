#include "main.h"
/**
 * _strlen - it returns the lenght of given string of characters
 * @s: the string to be counted
 * Return: lenght
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}

	return (l);
}
