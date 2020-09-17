#include "monty.h"
glob_var_t Var;

/**
 * func_code_push - Will data if the word is push.
 * @stack: stack that contain the data
 * @ln: received the number of de line
 */


void func_code_push(stack_t **stack, unsigned int ln __attribute__((unused)))
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		dprintf(STDERR_FILENO, "Error: malloc failed\n");
		free(Var.linebuf);
		fclose(Var.file);
		free_stacki(*stack);
		exit(EXIT_FAILURE);
	}

	new->n = Var.node_num;
	new->next = NULL;
	new->prev = NULL;

	if (*stack)
	{
		new->next = *stack;
		(*stack)->prev = new;
	}

	*stack = new;


}

/**
 * func_code_pall - Will data if the word is pall.
 * @stack: stack that contain the data
 * @ln: received the number of de line
 */


void func_code_pall(stack_t **stack, unsigned int ln __attribute__((unused)))
{
	stack_t *node = *stack;
	size_t count = 0;

	if (!stack)
	{
		free(stack);
		exit(EXIT_FAILURE);
	}
	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		count++;
	}
}

/**
 * func_code_pop - removes the top element of the stack.
 * @stack: stack that contain the data
 * @ln: received the number of de line
 */

void _pop(stack_t **stack, unsigned int ln __attribute__((unused)))
{
	stack_t *node = *stack;

	if (stack == NULL || *stack == NULL)
	{
		printf("L%u: can't pop an empty stack\n", ln);
		free_stacki(*stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	*stack = node->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(node);
}

/**
 * _pint - prints the value at the top of the stack, followed by a new line
 * @stack: stack
 * @line_number: line number
 */

void _pint(stack_t **stack, unsigned int ln __attribute__((unused)))
{

	if (!stack || !*stack)
	{
		printf("L%u: can't pint, stack empty\n", ln);
		free_stacki(*stack);
		free(stack);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}
