#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function to print a aname using a pointer to a function
 * @name: string to addd
 * @f: pointer to function
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f ==  NULL)
		return;

	f(name);
}
