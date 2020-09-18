#include "monty.h"
/**
 * _sub - subtracts the top element of the stack from the second top element
 * @stack: stack
 * @line_number: line number
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	int sub;

	if (!*stack || !(*stack)->next)
	{
		printf("L%u: can't sub, stack too short\n", line_number);
		free_list(stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	sub = ((*stack)->next)->n - (*stack)->n;

	_pop(stack, line_number);
	(*stack)->n = sub;
}
