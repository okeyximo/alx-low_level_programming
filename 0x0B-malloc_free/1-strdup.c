#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char.
 * @size: argument for the size of the array
 * @c: argument for the char
 * Return: NULL or a pointer to the arrays
 */

char *_strdup(char *str)
{
	char *pstr;
	int i = 0, len = 0;

	while (str[len])
		len++;
	if (str == NULL)
		return (NULL);
	pstr = (char *)malloc((sizeof(char)) * (len + 1));
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
