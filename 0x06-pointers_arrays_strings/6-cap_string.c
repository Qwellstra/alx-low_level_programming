#include "main.h"

/**
 * cap_string - capitalizes letters of a word in a string
 * @str: the string to be capitalized
 *
 * Return: A pointer to the changed string
 */
char *cap_string(char *str)
{
	int ell = 0;

	while (str[ell])
	{
		while (!(str[ell] >= 'a' && str[ell] <= 'z'))
			ell++;

		if (str[ell - 1] == ' ' ||
			str[ell - 1] == '\t' ||
			str[ell - 1] == '\n' ||
			str[ell - 1] == ',' ||
			str[ell - 1] == ';' ||
			str[ell - 1] == '.' ||
			str[ell - 1] == '!' ||
			str[ell - 1] == '?' ||
			str[ell - 1] == '"' ||
			str[ell - 1] == '(' ||
			str[ell - 1] == ')' ||
			str[ell - 1] == '{' ||
			str[ell - 1] == '}' ||
			ell == 0)
			str[ell] -= 32;
		ell++;
	}
	return (str);
}
