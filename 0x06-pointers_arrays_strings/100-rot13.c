#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string of txt using rot13
 * @s: Pointer to as tring parameters
 *
 * Return: *s
 */

char *rot13(char s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NUNDFNMOFNPSFGNIOTUGBIUERGTNSFsfdvsndvsdfsdfsdfsdcxfg";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (s);
}
