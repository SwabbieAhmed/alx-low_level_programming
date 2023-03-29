#include "main.h"
#include <string.h>

/**
 * _strncat - it concatenates two strings
 * @dest: the destination strng we are to append
 * @src: the source string we add to
 * @n: the number of bytes from src to concatenate
 * Return: the pointer to the resulting destination string
*/

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

