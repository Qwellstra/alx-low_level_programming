#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: storage memory
 * @src: memory where where the copied value is stored
 * @n: the number of bytes
 */
Char *_memcpy(char *dest, char *src, unsigned int)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
