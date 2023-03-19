#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns alphabets both lower and upper cases
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lch = 'a';
	int uch = 'A';

	while (lch <= 'z')
	{
		putchar(lch);
		lch++;
	}
	while (uch <= 'Z')
	{
		putchar(uch);
		uch++;
	}

	putchar('\n');
	return (0);
}
