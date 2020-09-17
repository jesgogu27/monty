#include "monty.h"
/**
 * op_func - use the right opcode function
 * @opcode: opcode function to use
 * @stack: pointer
 * @line_num: line number
 * Return: EXIT_SUCCESS
 */
int op_func(char *opcode, stack_t **stack, unsigned int line_num)
{
	unsigned int x;

	instruction_t opc[] = {
		{"pall", _pall},
		{"pint", _pint},
		{NULL, NULL}
	};

	for (x = 0; opc[x].opcode; x++)
	{
		if (strcmp(opcode, opc[x].opcode) == 0)
		{
			(opc[x].f)(stack, line_num);
			return (EXIT_SUCCESS);
		}
	}
	printf("L%d: unknown instruction %s\n", line_num, opcode);
	val = 1;
	exit(EXIT_FAILURE);
}
