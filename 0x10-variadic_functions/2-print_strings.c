#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @n: number of strings passed to the function
 * @separator: string to be printed between the strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *c;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		c = va_arg(list, char*);
		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
