#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of integers passed to the function
 *
 * Return: sum of the args or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int i, sum = 0;

va_start(list, n);
if (n != 0)
	for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
		;
va_end(list);

return (sum);
}
