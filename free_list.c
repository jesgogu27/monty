#include "monty.h"
/**
 * free_list - frees the linked list
 * @head: head of the stack
  */

void free_list(stack_t **head)
{
	stack_t *tmp;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
/**
 * free_all - frees linked list
 * @stack: linked list to free
 * @l: line from getline to be free
 * @arc: file to pointer
 * Return: N/A, void function
 */

void free_all(stack_t *stack, char *l, FILE *arc)
{
	if (stack != NULL)
		free_list(&stack);
	free(l);
	fclose(arc);
}
