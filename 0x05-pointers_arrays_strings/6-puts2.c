#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * @str: character to be printed
 *
 */

void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			putchar(str[i]);
		else
			continue;
	}
	putchar('\n');
}
