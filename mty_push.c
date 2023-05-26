#include "monty.h"
void push(stack_t **stack, unsigned int line_number)
{
    stack_t *new_node = malloc(sizeof(stack_t));
    int argument = 0;

    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = argument;
    new_node->prev = NULL;

    if (*stack == NULL)
    {
        new_node->next = NULL;
    }
    else
    {
        new_node->next = *stack;
        (*stack)->prev = new_node;
    }

    *stack = new_node;
    printf("Pushing value %d at line %u\n", argument, line_number);
}
