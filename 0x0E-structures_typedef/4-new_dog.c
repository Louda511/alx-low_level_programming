#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - function to create a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to initilization of struct or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t d;
	dog_t *ptr = &d;

	if (!ptr)
		return (NULL);

	d.name = name;
	d.age = age;
	d.owner = owner;

	return (ptr);
}
