#include <stdio.h>
/**
 * main - Entry point of the function
 *
 * Return: 0 if success, 1 indicates otherwise
 */

int main(void)
{
	char c;

	c = 'a';
	while
		(c <= 'z') {
			if ((c != 'q' || c != 'e') && c <= 'z')
				putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
