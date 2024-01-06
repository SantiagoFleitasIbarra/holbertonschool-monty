#include "monty.h"

void free_stack(stack_t *stack)
{
    while (stack != NULL)
    {
        stack_t *temp = stack;
        stack = stack->next;
        free(temp);
    }
}

void free_line(char *line)
{
    free(line);
}