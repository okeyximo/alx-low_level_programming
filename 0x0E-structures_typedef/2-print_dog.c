#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer to the a dod structure
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (!d->name)
		d->name = "(nill)";
	if (!d->owner)
		d->owner = "(nill)";

	if (d)
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
