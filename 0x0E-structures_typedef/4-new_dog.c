#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create a new dog
 *@name: name of the dog
 *@age: age of the dog
 *@owner: the owner of the dog
 *
 * Return: Pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, j, k;
	char *n, *m;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	n = malloc(sizeof(char) * i + 1);
	if (n == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	m = malloc(sizeof(char) * j + 1);
	if (m == NULL)
	{
		free(n);
		free(new_dog);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		n[k] = name[k];
	for (k = 0; k <= j; k++)
		m[k] = owner[k];

	new_dog->name = n;
	new_dog->age = age;
	new_dog->owner = m;

	return (new_dog);
}
