#include "monty.h"
/**
 * _pint - prints the value at the top of the stack, followed by a new line
 * @stack: stack
 * @line_number: line number
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (!stack || !*stack)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		free_list(stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
