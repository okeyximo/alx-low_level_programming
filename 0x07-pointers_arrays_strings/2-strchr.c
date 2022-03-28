#include "main.h"

/**
 * _strchr -  returns a pointer to the first occurance of the char c in a str
 *
 * @s: pointer to the test string
 * @c: the test character
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}

