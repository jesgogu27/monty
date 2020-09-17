#include "monty.h"
/**
 * _swap - swaps the top two elements of the stack
 * @stack: stack
 * @line_number: line number
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	int swap;

	if (!(*stack) || !(*stack)->next)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		free_list(stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	swap = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swap;
}
