#include "main.h"
/**
 * _strspn - Entry point to the function
 * @s: First input
 * @accept: 2nd input
 *
 * Return: 0 for success
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
