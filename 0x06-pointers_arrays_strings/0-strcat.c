#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string we append to
 * @src:the source string we add to
 * Return: Apointer to dest, the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
	{
		p++;
	}

	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}
