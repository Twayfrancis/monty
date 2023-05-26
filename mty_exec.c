#include "monty.h"
void executeOperation(stack_t **stack, char *operation, unsigned int line_number)
{
    if (strcmp(operation, "push") == 0)
    {
        push(stack, line_number);
    }
    else if (strcmp(operation, "pop") == 0)
    {
        pop(stack, line_number);
    }
    else
    {
        fprintf(stderr, "L%d: unknown instruction %s\n", line_number, operation);
        exit(EXIT_FAILURE);
    }
}
