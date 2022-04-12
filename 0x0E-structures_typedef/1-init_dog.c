#include "dog.h"
#include "stdlib.h"
/**
 * init_dog - initialiaze a variable of type struct dog
 * @d: pointer to the dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		d = malloc(sizeof(struct dog));

	d->name =  name;
	d->age = age;
	d->owner = owner;


}
