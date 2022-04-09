#include "main.h"
#include <stdlib.h>
/**
 * array_range - prints an arr of range min to max
 * @min: the minimum value
 * @max: the maximum value
 * Return: a pointer that points to an array of the intergers
 */

int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));
	if (!arr)
		return (NULL);

	while (min <= max)
		arr[i++] = min++;
	return (arr);
}
