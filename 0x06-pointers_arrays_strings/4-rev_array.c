#include "main.h"

/**
 * reverse_array - reverses an array
 *
 * @a: an array of ints
 * @n: size of array
 *
 * Return: always void
 */

void reverse_array(int *a, int n)
{
	int store;
	int i = 0;

	while (i < (n / 2))
	{
		store = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = store;
		i++;
	}
}
