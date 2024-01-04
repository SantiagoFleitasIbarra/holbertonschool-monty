#include <stdio.h>
#include <stdlib.h>

#define SIZE_STACK 500


void pop(int line_num)
{
int stack[SIZE_STACK];
int top = -1;

    if (top == -1)
{
        printf("Error at line %d: can't pop an empty stack.\n", line_num);
        exit(EXIT_FAILURE);
    }

    --top;
}
