#include "monty.h"


/**
* add - the function to add to the stack
 * @stack: pointer to the stack where the element will be added
 * @line_number: the current line number in the script
 *
 * Return: void (or describe what is returned)
 */


void add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	(*stack)->next->n += (*stack)->n;
	*stack = (*stack)->next;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

