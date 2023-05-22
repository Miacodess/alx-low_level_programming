#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: char
 * @age: float
 * @owner: char
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nd, od, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nd = 0; name[nd]; nd++)
		;
	nd++;
	dog->name = malloc(nd * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nd; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (od = 0; owner[od]; od++)
		;
	od++;
	dog->owner = malloc(od * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < od; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
