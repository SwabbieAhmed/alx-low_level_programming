#include "main.h"

/**
 * _strlen - length of the string
 * @s: is the string to
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
