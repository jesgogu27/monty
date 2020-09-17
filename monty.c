#include "monty.h"

/**
*main - Received argument of console and call other funtions.
*@ac: number of arguments
*@av: array of argments
*Return: a integer
*/

int main(int ac, char **av)
{
	char *file;

	file = av[1];
	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	readfile(file);
	return (0);
}
