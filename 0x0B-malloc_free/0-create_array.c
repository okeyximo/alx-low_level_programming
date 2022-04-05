#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * 
 * @size: argument for the size of the array
 * @c: argument for the char
 * Return: NULL or a pointer to the arrays
 */

char *create_array(unsigned int size, char c)
{
	char *my_array;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);
	my_array = (char *)malloc(sizeof(char) * size);
	if (my_array == NULL)
		return (NULL);
	while (i < size)
	{
		my_array[i] = c;
		i++;
	}
	return (my_array);
	free(my_array);
}
