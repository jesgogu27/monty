#include "monty.h"
glob_var_t Var;

/**
* free_stacki - free Node in the head
* @head: node to free
*/

void free_stacki(stack_t *head)
{
	stack_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	head = NULL;
}
