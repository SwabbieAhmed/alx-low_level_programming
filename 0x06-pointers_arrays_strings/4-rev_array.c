#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 *
 * Return: no return
 */

void reverse_array(int *a, int n)
{
        int i, j;
        int temp;

        for (i = 0, j = n - 1; i < j; i++, j--)
        {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
        }
}
