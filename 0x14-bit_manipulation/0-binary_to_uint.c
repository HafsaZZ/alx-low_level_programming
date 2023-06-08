#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: unsigned int or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		res = res << 1;
		res = res | (b[i] - '0');
		i++;
	}
	return (res);
}
