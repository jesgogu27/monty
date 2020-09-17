#include "monty.h"
glob_var_t Var;

/**
 *int_Error - proccess of integer error
 *@head: head of stack to read
 *@number: number of line.
 */

void int_Error(stack_t *head, unsigned int number)
{
	dprintf(STDERR_FILENO, "L%u: usage: push integer\n", number);
	free(Var.sizbuf);
	fclose(Var.file);
	free(Var.linebuf);
	free_stacki(head);
	exit(EXIT_FAILURE);
}


/**
 *parser_line- show error if number of character is minor to zero
 *@characters: numbers of character received
 *
 */

void parser_line(ssize_t characters)
{
	if (characters == -1)
	{
		free(Var.linebuf);
		fclose(Var.file);
		exit(0);
	}
}


/**
 *check_opc_code - Will show error if line  is empty
 *@line_check: number of character.
 *@line_num: number of line to will checked
 *@head: stack to free.
 */

void check_opc_code(int line_check, unsigned int line_num, stack_t *head)
{
	if (line_check == 0)
	{
		check_instructions(line_num);
		free(Var.linebuf);
		fclose(Var.file);
		free_stacki(head);
		exit(EXIT_FAILURE);
	}
}

/**
 *check_instructions - Will show error if instruccion is empty
 *@ln: line to check
 *
 */

void check_instructions(unsigned int ln)
{
	dprintf(STDERR_FILENO, "L%u: unknown instructionnn %s\n", ln, Var.sizbuf);
}
