#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function to return the sum of all its params
 * @n: number of params passed to funct
 * @...: A variable no. of params to calc sum of
 *
 * Return: 0 if n equals 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
