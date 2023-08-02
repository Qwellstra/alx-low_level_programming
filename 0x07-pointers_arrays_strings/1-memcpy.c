#include"main.h"
/**
 * _memcpy - A function that copies memory area
 * @dest: Memory where the value to be copied is stored
 * @src: Memory where the copied value is stored
 * @n: The number of bytes copied
 *
 * Return: The copied memory with n bytes changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
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
