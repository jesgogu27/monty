#include "monty.h"
/**
 * _pop - removes the top element of the stack
 * @stack: stack
 * @line_number: line number
 */

void _pop(stack_t **stack, unsigned int line_number)
{
	stack_t *top = *stack;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		free_list(stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	*stack = top->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(top);
}
