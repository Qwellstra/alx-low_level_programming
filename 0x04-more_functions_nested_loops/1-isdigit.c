#include "main.h"

/**
 * _isdigit - check if numbers are between 0-9
 * @c: Char to be checked
 *
 * Return: 0 or 1
 */

int_isdigit(int c)
{
	if(c >= '0' && c <='9')
		return(1);
	else
		return(0);
}
