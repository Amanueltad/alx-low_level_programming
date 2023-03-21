#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialize a var
 * @d: pointer to struct dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: ..
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)

		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
