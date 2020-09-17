#include "monty.h"
glob_var_t Var;

/**
 *func_parser - Function that .
 *@head: Directory and name of file.
 *@num: number of data
 *Return: a pointer to a line of characters.
 */


char *func_parser(stack_t *head, unsigned int num)
{
	char *delim = " \n";
	char *token = NULL, *array = NULL;
	int i = 0;

	token = strtok(Var.linebuf, delim);
	if (token == NULL)
		return (NULL);
	if (strcmp(token, "push") == 0)
	{
		array = strtok(NULL, delim);
		if (array == NULL)
			int_Error(head, num);

		while (array[i])
		{
			if (i == 0 && array[i] == '-')
			{
				i++;
				continue;
			}
			if (array[i] >= 48 && array[i] <= 57)
			{
				i++;
				continue;
			}
			else
			{
				int_Error(head, num);
			}

		}
		Var.node_num = atoi(array);
	}
	return (token);
}
