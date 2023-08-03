#include "main.h"

int check_pal(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - A function that checks whether a number is a palindrome
 * @s: the string to reverse
 *
 * Return: 1 if a palindrome, 0 if otherwise
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - A function that returns the length of a string
 * @s: the string to calculate the length for
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - A function that checks recursively whether a number is a palindrome or not
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 1 for a palindrome, 0 for otherwise
 */
int check_pal(char *s, int i, int len)
{
	if (* (s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_pal(s, i + 1, len - 1));
}
