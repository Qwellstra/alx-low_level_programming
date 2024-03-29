#include "main.h"
/**
 * _strstr - The entry point
 * @haystack: fist input
 * @needle: second input
 *
 * Return: 0 for success
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *p = needle;

		while (*i == *p && *p != '\0')
		{
			i++;
			p++;
		}

		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
