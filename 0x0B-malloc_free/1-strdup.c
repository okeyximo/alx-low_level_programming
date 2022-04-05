#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: argument for the size of the array
 * @c: argument for the char
 * Return: NULL or a pointer to the arrays
 */

char *create_array(unsigned int size, char c)
{
	char *pstr;
	int i = 0, len = 0;

	len = sizeof(str) / sizeof(str[0]);
	if (str == NULL)
		return (NULL);
	pstr = (char *)malloc(len * (sizeof(char)));
	if (pstr == NULL)
		return (NULL);
	while (i <= len)
	{
		*(pstr + i) = str[i];
		i++;
	}
	return (pstr);
	free(pstr);
}
