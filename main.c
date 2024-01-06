#include "monty.h"

/**
 * main - a monty interpreter
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
    char *line = NULL, *opcode = NULL;
    FILE *file = NULL;
    size_t len = 0;
    unsigned int line_number = 0;
    stack_t *stack = NULL;

    if (argc != 2)
    {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }
    file = fopen(argv[1], "r");
    if (file == NULL)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    while (getline(&line, &len, file) != -1)
    {
        line_number++, opcode = strtok(line, " \t\n");
        if (opcode == NULL || opcode[0] == '#')
            continue;
        if (strcmp(opcode, "push") == 0)
            _push(&stack, line_number);
        else if (strcmp(opcode, "pall") == 0)
            _pall(&stack, line_number);
        else if (strcmp(opcode, "nop") == 0)
            _nop(&stack);
        else if (strcmp(opcode, "pint") == 0)
            _pint(&stack, line_number);
        else
        {
            fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
            exit(EXIT_FAILURE);
        }
    }
    fclose(file), free_stack(stack), free_line(line);
    return (0);
}