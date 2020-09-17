#include "monty.h"
glob_var_t Var;

/**
 * _swap - swaps the top two elements of the stack
 * @stack: stack
 * @line_number: line number
 */

void _swap(stack_t **stack, unsigned int ln __attribute__((unused)))
{
	int swap;

	if (!(*stack) || !(*stack)->next)
	{
		printf("L%u: can't swap, stack too short\n", ln);
		free_stacki(*stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	swap = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = swap;
}

