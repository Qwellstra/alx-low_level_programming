#include "function_pointers.h"
/**
 * int_index - returning index place if comparison = true, else -1
 * @array: array
 * @size: the size of all the elements in the array
 * @cmp: A pointer to a funct
 * Return: 0 for success
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
