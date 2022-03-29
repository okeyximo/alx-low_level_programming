#include "main.h"

/**
 * _memcpy - copy n bytes from memory area src to memory area dest
 *
 * @dest: pointer to the new destination memory area
 * @src: pointer to the source memory area
 * @n: n bytes of memory
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
