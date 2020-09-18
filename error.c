#include "monty.h"

/**
 *arguments_error - error for #arguments_
 *Return: Nothing
 */

void arguments_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}

/**
 *file_error - error for file_error
 *@file: file that is read
 *Return: Nothing
 */

void file_error(char *file)
{
	fprintf(stderr, "Error: Can't open file %s\n", file);
	exit(EXIT_FAILURE);
}
