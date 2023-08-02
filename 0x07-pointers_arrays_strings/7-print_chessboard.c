#include "main.h"
/**
 * print_chessboard - Function entry point
 * @a: array
 *
 * Retrun: 0 for success
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			putchar('\n');
		}
	}
}
