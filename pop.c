#include "monty.h"

/**
* pop - the function to add to the stack
 * @stack: pointer to the stack where the element will be added
 * @line_number: the current line number in the script
 *
 * Return: the pop command
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

