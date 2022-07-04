#include<stdio.h>
#include "dog.h"

/**
  * init_dog - Initializes a structure
  * @d: A dog structure.
  * @name: The name of the dog to be assigned.
  * @age: The age of the dog.
  * @owner: The owner of the dog.
   * Return: No value
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
