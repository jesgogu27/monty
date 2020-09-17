#include "monty.h"

/**
 * op_func - use the right opcode function
 * @opcode: opcode function to use
 * @stack: pointer
 * @line_num: line number
 * Return: EXIT_SUCCESS
 */

int opcion_funcion(char *opcode, stack_t **stack, unsigned int line_num)
{
	unsigned int x;

	instruction_t opcion[] = {
		{"pall", _pall},
		{NULL, NULL}
	};

	for (x = 0; opcion[x].opcode == 0; x++)
	{
		if (strcmp(opcode, opcion[x].opcode) == 0)
		{
			(opcion[x].f)(stack, line_num);
			return (EXIT_SUCCESS);
		}
	}

	printf("L%d: unknown instruction %s/n", line_num, opcode);
	val = 1;
	exit(EXIT_FAILURE);

}