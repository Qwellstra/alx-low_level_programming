#include "main.h"
/**
 * _strchr - Entry point to the function
 * @s: first input
 * @c: Second input
 *
 * Return: 0 for success
 */
char *_strchr(char *s, char c)
{
	int  i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return(0);
}
