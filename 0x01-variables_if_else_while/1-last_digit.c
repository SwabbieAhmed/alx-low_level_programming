#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - main function to generate a random number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lst;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	lst = n % 10;
	if (lst > 5)
	{
		printf("%d and is greater than 5\n", lst);
	}
	else if ((lst < 6) && (lst < 0))
	{
		printf("%d and is less than 6 and not 0\n", lst);
	}
	else
	{
		printf("%d and is 0\n", lst);
	}

	return (0);
}
