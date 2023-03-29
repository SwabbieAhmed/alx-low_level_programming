#include "main.h"

/**
 * leet - encodes a string to 1337
 * @str: the string to be encoded
 *
 * Return: A pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;
	char leet[] = {'A', 'E', 'O', 'T', 'L'};
	char repl[] = {'4', '3', '0', '7', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet[j] || str[i] == leet[j] + 32)
				str[i] = repl[j];
		}
	}
	return (str);
}

