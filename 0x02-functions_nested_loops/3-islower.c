#include "main.h"


/**
 * _islower - checks if the character is lowercase
 * @c: is the char that is being inspected
 * Return: 1 if char is lowercase, otherwise return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
