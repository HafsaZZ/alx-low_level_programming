#include "main.h"
#include <stdio.h>
/**
 *main - print number of arguments passed.
 *@argc: number of commandline arguments.
 *@argv: argument vector
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
