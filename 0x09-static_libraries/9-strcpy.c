#include "main.h"
/**
 * char *_strcpy - A function that copies a str pointed by src
 * @dest: where to copy the string
 * @src: where to copy the str from
 *
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int I = 0;
	int X = 0;

	while (*(src + I) != '\0')
	{
		I++;
	}
	for ( ; X < I; X++)
	{
		dest[X] = src[X];
	}
	dest[I] = '\0';
	return (dest);
}
