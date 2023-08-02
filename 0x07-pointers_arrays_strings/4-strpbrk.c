#include "main.h"
/**
 *
 * _strpbrk - Entry poin tothe function
 * @s: first input
 * @accept: second input
 * Return: 0 for succes
 */
char _strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
