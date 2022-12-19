#include "main.h"

/**
 * print_array - A function printing the n elemnts of an array
 * @a: name of the array
 * @n: number of elements in the array.
 * Return: a and inputs
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < (n - 1); m++)
	{
		printf("%d, ", a[m]);
	}
		if  (m == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
