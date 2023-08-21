#include <stdio.h>
#include "main.h"

/**
 * main - a funct to print the no of arguments passed to the program
 * @argc: the no. of arguments
 * @argv: an array of arguments
 *
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
(void) argv;
	printf("%d\n", argc -1);

	return (0);
}
