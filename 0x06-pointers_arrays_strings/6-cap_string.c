#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 *
 * @t: string
 *
 * Return: t
 */


char *cap_string(char *t)
{
	int i, j;
	char special[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};

	for (i = 0; t[i] != '\0'; i++)
	{
		if (i == 0 && t[i] >= 'a' && t[i] <= 'z')
		{
			t[i] -= 32;
		}
		for (j = 0; j < 13 ; j++)
		{
			if (t[i] == special[j])
			{
				if (t[1 + i] >= 'a' && t[1 + i] <= 'z')
				{
					t[1 + i] -= 32;
				}
			}
		}
	}
	return (t);
}
