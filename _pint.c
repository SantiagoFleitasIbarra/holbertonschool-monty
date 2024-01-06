#include "monty.h"

/**
 * _pint - print the element at the top of the stack
 * @stack: pointer to pointer to the first element on the stack
 * @line_number: number of the current line
 * Return: 0 if the first element is printed
 */
void _pint(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL)
    {
        fprintf(stderr, "L%u: can't pint, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    printf("%d\n", (*stack)->n);
}