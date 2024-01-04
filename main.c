#include "monty.h"

/**
 * main - a monty interpreter
 * @argc: number of arguments
 * @argv: the arguments
 * Return: 0 if success
*/

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "USAGE: monty file\n");
        exit(EXIT_FAILURE);
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        exit(EXIT_FAILURE);
    }

    stack_t *stack = NULL;

    char *line = NULL;
    size_t len = 0;
    unsigned int line_number = 0;

    while (getline(&line, &len, file) != -1) {
        line_number++;

        char *opcode = strtok(line, " \t\n");
        if (opcode == NULL || opcode[0] == '#') {
            continue;
        }

        if (strcmp(opcode, "push") == 0) {
            _push(&stack, line_number);
        } else if (strcmp(opcode, "pall") == 0) {
            _pall(&stack, line_number);
        } else if (strcmp(opcode, "nop") == 0) {
            _nop(&stack, line_number);
        } else {
            fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
            exit(EXIT_FAILURE);
        }
    }

    fclose(file);

    return EXIT_SUCCESS;
}