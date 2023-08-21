#include <stdio.h>
#include "main.h"
/**
 * main - a function to print the name of the program
 * @argc: The number of arguments available
 * @argv: the number of array arguments
 *
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
