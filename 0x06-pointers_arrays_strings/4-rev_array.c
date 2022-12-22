#include "main.h"

/**
 * reverse_array - A function that reverses an array of integers
 * @a: an array of integers
 * @n: number elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int y;
	int z;

	for (y = 0; y < n--; y++)
	{
		z = a[y];
		a[y] = a[n];
		a[n] = z;
	}
}
