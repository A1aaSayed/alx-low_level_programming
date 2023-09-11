#include <stdio.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	printf("My name is %s, and I am %f", );
}
