#include "dog.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * init_dog -initializes a dog
 * @d: a struct dog
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
