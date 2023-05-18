#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: size of memory
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
