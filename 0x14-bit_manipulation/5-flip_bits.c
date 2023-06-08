#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: first number
 * @m: second number
 *
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);

}
