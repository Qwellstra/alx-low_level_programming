#include "main.h"


/**
 * print_alphabet - prints all the alphabetic letters in lowercase
 */
void print_alphabet(void)
{
	char letter;


	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
