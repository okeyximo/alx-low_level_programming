#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size
 * bytes each and returns a pointer to the allocated memory
 *
 * @nmemb: the array
 * @size: size of bytes to be allocated
 * Return: NULL or pointer to the memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, size * nmemb);
	return (ptr);
}

