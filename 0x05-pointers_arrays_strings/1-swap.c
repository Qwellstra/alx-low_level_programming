#include "main.h"
/**
 * swap_int - this function swaps the values of tw integers
 * @a: the first integer
 * @b: the second integer
 */
void swap_int(int *a, int *b)
{
	int n;


	n = *a;
	*a = *b;
	*b = n;
}
