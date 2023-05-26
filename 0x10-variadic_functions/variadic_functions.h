#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdarg.h>

/*returns the sum of all its parameters*/
int sum_them_all(const unsigned int n, ...);
/*prints numbers, followed by a new line*/
void print_numbers(const char *separator, const unsigned int n, ...);
/*prints strings, followed by a new line*/
void print_strings(const char *separator, const unsigned int n, ...);
/*prints anything*/
void print_all(const char * const format, ...);

void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);

int _putchar(char c);

/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct printTypeStruct
{
char *type;
void (*printer)(va_list);
} printTypeStruct;

#endif
