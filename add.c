#include <stdio.h>
#include <stdlib.h>

#define SIZE_STACK 500


void add(int line_number)
{

int stack[SIZE_STACK];
int top = -1;

	if (top < 1)
	{
        printf("Error at line %d: can't add, stack too short.\n", line_number);
        exit(EXIT_FAILURE);
	}

    stack[top - 1] += stack[top];

    --top;
}
