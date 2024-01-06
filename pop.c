#include "monty.h"

/**
pop - the pop function
@stack: the stack
@line_number: the current line number

Return: pop command
*/

void pop(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;
	*stack = (*stack)->next;
	free(temp);
}

