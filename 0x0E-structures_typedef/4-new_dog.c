#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - function that prints a struct dog
 * @name:dog name
 * @age:dog age
 * @owner:dog owner
 * Return: p address value
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(*dog));

	if (dog == NULL)
		return (NULL);

	(*dog).name = malloc(strlen(name) + 1);
	(*dog).owner = malloc(strlen(owner) + 1);
	(*dog).age = age;

	if ((*dog).name == NULL)
	{
		free (dog);
		return (NULL);
	}
	if ((*dog).owner == NULL)
	{
		free (dog);
		free ((*dog).name);
		return (NULL);
	}

	strcpy((*dog).name, name);
	strcpy((*dog).owner, owner);

	return (dog);	
}
