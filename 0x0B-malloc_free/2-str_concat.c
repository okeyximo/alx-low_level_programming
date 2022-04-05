#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concats two strings
 * @s1: argument for 1st str
 * @s2: argument for 2nd str
 * Return: NULL or a pointer to concat str or null terminator
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	char *pconcat;

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	pconcat = (char *)malloc((sizeof(char) * (len1 + len2 + 1)));
	if (s1 == NULL && s2 == NULL)
		pconcat = '\0';
	if (pconcat == NULL)
		return (NULL);
	if (s1)
	{
		while (i < len1)
		{
			pconcat[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < (len1 + len2))
		{
			pconcat[i] = s2[j];
			i++;
			j++;

		}
	}
	pconcat[i] = '\0';
	return (pconcat);
	free(pconcat);

}






