#include "monty.h"



/**
* free_stack - the function to add to the stack
 * @stack: pointer to the stack where the element will be added
 *
 * Return: free the memory of the stack
 */

void free_stack(stack_t *stack)
{
	while (stack != NULL)
	{

	stack_t *temp = stack;

	stack = stack->next;

	free(temp);
	}
}



/**
* free_line - the function to add to the stack
 * @line: the line
 * Return: free the current memory used
 */


void free_line(char *line)
{
	free(line);
}
