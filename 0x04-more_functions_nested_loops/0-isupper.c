#include "main .h"

/**
 * _is upper - checks if character ir uppercase
 * @c: input
 *
 * Return: 1 if uppercase, 0 if not uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
