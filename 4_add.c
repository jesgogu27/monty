#include "monty.h"
/**
 * _add - adds the top two elements in the stack
 * and replaces both nodes with the sum
 * @stack: stack
 * @line_number: line number
 */

void _add(stack_t **stack, unsigned int line_number)
{
	int adds;

	if (!*stack || !(*stack)->next)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		free_list(stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	adds = ((*stack)->next)->n + (*stack)->n;

	_pop(stack, line_number);
	(*stack)->n = adds;
}