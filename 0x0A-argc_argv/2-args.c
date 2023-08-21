#include <stdio.h>
#include "main.h"
/**
 * main - a funct to print all arguments passed to it
 * @argc: The no. of arguments
 * @argv: the array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
