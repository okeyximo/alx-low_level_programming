#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 *
 * @b: passed unsigned int variable
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *pb;
	pb = malloc(b);
	if (pb == NULL)
		exit(98);
	return (pb);
}
