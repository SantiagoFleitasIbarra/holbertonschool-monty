#include "monty.h"

/**
* swap - the function to add to the stack
 * @stack: pointer to the stack where the element will be added
 * @line_number: the current line number in the script
 *
 * Return: swap the elements in the stack
 */



void swap(stack_t **stack, unsigned int line_number)
{

int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
	fprintf(stderr, "L%u: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
	}

	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
