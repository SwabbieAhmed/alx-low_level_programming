#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to a stdout, followed by new line
 *
 * @str: pointer to string
 *
 * Return: none
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
