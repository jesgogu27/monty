#include "monty.h"
glob_var_t Var; /* Global Variable*/

/**
 *readfile - read file digited in console.
 *@filename: Directory and name of file.
 *Return: a pointer to a line of characters.
 */

int readfile(char *filename)
{
	stack_t *head = NULL;
	size_t buzsize = 0;
	ssize_t cha;
	int check;
	unsigned int count = 0;

	Var.linebuf = Var.sizbuf = NULL;

	Var.file = fopen(filename, "r");
	if (Var.file == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	cha = getline(&Var.linebuf,  &buzsize, Var.file);
	parser_line(cha);
	while (cha >= 0)
	{
		Var.sizbuf = NULL;
		count++;
		Var.sizbuf = func_parser(head, count);

		if (Var.sizbuf == NULL)
		{
			cha = getline(&Var.linebuf, &buzsize, Var.file);
			continue;
		}
		check = get_functions(&head, count);
		check_opc_code(check, count, head);
		cha = getline(&Var.linebuf,  &buzsize, Var.file);

	}
	free(Var.sizbuf);
	free_stacki(head);
	fclose(Var.file);
	return (0);
}
