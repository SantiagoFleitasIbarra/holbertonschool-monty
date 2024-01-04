#include <stdio.h>
#include <stdlib.h>

#define SIZE_STACK  500

void swap()
{

int stack[SIZE_STACK];
int top = -1;
int temp;

	if (top < 1)
	{

	printf("Error: can't swap, stack too short.\n");
	exit(EXIT_FAILURE);
	}

temp = stack[top];
stack[top] = stack[top - 1];
stack[top - 1] = temp;

}
