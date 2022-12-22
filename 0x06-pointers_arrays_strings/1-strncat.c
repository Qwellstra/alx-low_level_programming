#include "main.h"

/**
 * _strncat - combines two strings
 * using at most n bytes from src
 * @dest: input string one
 * @src: input string two
 * @n: input string
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int y;

	i = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (j < n && src[b] != '\0')
	{
		dest[a] = src[b];
		x++;
		y++;
	}
	dest[a] = '\0';
	return (dest);
}
