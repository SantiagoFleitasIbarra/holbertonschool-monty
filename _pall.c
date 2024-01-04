#include "monty.h"

/**
 * _pall - implement the pall opcode
 * @stack: pointer to a stack node pointer
 * @line_number: variable representing the current line number
 * Return: 0 if success
*/
int _pall(stack_t **stack, unsigned int line_number)
{
    stack_t *element = *stack;

    (void)line_number;

    if (!element)
        return (0);
    while (element)
    {
        if (element->n)
            printf("%u\n", element->n);
        else
            printf("%u\n", 0);

        element = element->next;
    }
    return (0);
}