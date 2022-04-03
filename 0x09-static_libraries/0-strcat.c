#include "main.h"

/**
 * _strcat - concatanates two strings
 * @dest: destination string
 * @src: string to add to end of dest
 *
 * Return: char pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
