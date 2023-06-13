#include "main.h"

/**
 * main - create the copy
 * @ac: argument count
 * @av: argument strings
 *
 * Return: 0
 */

int main(int ac, char *av[])
{
	int input, output, istatus, ostatus;
	char buffer[MAXSIZE];
	ssize_t mode;

	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	if (ac != 3)
		dprintf(SE, "Usage: cp file from file_to\n"), exit(97);
	input = open(av[1], O_RDONLY);
	if (input == -1)
		dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
	output = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (output == -1)
		dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
	do {
		istatus = read(input, buffer, MAXSIZE);
		if (istatus == -1)
		{
			dprintf(SE, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (istatus > 0)
		{
			ostatus = write(output, buffer, (ssize_t) istatus);
			if (ostatus == -1)
			{
				dprintf(SE, "Error: Can't write to %s\n", av[2]);
				exit(99);
			}
		}
	} while (istatus > 0);
	istatus = close(input);
	if (istatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", input), exit(100);
	ostatus = close(output);
	if (ostatus == -1)
		dprintf(SE, "Error: Can't close fd %d\n", output), exit(100);
	return (0);
}
