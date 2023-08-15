#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: 1st input value
 * @accept: 2nd input value
 *
 * Return: 0 for success
 */
char *_strpbk(char *s, char *accept)
{
	int k;

	while(s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
	s++;
	}
	return (0);
}
