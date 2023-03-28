#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * puts_half - prints half a string
 * @str: character to be printed
 */

void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= (len / 2);
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
