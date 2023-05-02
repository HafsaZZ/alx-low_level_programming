#include "main.h"
/**
 * swap_int - swap the values of two integers
 * @a: pointer a
 * @b: pointer b
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int n = *a;
	*a = *b;
	*b = n;
}
