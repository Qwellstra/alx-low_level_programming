#include "main.h"
/**
 * _memset - a function that fills a memory block with a specific value
 * @s: the starting address of the memory to be filled
 * @b: the desired value
 * @n: the numberofbytes that have changed
 *
 * Return: the changed array with the new value forn bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
