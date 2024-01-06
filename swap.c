#include "monty.h"

/**
swap - the function to swap in the stack
@stack: the stack
@line_number: the curretn line number


Return: a swap
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
