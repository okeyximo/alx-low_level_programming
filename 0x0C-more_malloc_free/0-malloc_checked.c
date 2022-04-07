#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: passed unsigned int variable
 * Return: the pointer or error message 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *pb;

	pb = malloc(b);
	if (pb == NULL)
		exit(98);
	return (pb);
}
