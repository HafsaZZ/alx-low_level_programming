#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to newly created integer
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);

	p = malloc((max - min + 1) * sizeof(*p));
	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		p[i] = min;

	return (p);
}
