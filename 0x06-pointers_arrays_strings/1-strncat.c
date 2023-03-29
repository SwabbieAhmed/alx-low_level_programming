#include "main.h"
#include <string.h>

/**
 * _strncat - it concatenates two strings
 * @dest: the destination string to be appended
 * @src: the source string we add to
 * @n: the number of bytes from src to concatenate
 * Return: the pointer to the resulting destination string
 */

char *_strncat(char *dest, char *src, int n)
{
        int dest_len = 0;
        int i = 0;

        while (dest[dest_len] != '\0')
        {
                dest_len++;
        }

        while (src[i] != '\0' && i < n)
        {
                dest[dest_len + i] = src[i];
                i++;
        }
        dest[dest_len + i] = '\0';
        return (dest);
}
