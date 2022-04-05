#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: argument for str
 * Return: NULL or a pointer to the str
 */

char *_strdup(char *str)
{
	char *pstr;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	pstr = (char *)malloc((sizeof(char)) * (len + 1));
	if (pstr == NULL)
		return (NULL);
	while (i < len)
	{
		*(pstr + i) = str[i];
		i++;
	}
	return (pstr);
	free(pstr);
}
