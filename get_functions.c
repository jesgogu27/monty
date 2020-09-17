#include "monty.h"
glob_var_t Var;

/**
 *get_functions- gets the order on the file
 *@head: first elemet of the stack
 *@line_number: number of line.
 *Return: a integer
 */


int get_functions(stack_t **head, unsigned int line_number)
{
	int i;

	instruction_t func_code[] = {
		{"swap", _swap},	
		{"pop", _pop},
		{"pint", _pint},
		{"push", func_code_push},
		{"pall", func_code_pall},
		{NULL, NULL}
	};

	i = 0;

	while (i != 6)
	{
		if (!(strcmp(func_code[i].opcode, Var.sizbuf)))
		{
			func_code[i].f(head, line_number);
			break;
		}

		i++;
	}
	if (i == 6)
		return (0);

	return (1);
}
