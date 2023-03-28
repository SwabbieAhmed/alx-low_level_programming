#include "main .h"

/**
 * _isupper - checks if character is uppercase
 * @c: input
 *
 * Return: 1 if uppercase, 0 if not uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
