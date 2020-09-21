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

/**
 *_token - option
 *@line_number: file that is read
 *Return: Nothing
 */

void _token(unsigned int line_number)
{
		printf("L%d: usage: push integer\n", line_number);
		val = 1;
		exit(EXIT_FAILURE);
}
