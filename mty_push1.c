#include "monty.h"

void push(stack_t **stack, unsigned int line_number)
{
	int value = atoi(argv[1]);
    if (argc != 2)
    {
        fprintf(stderr, "L%d: usage: push int\n", line_number);
        /* You might want to handle this error condition differently */
        exit(EXIT_FAILURE);
    }


    /* You can add additional validation checks for the value if needed */

    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "L%d: memory allocation failed\n", line_number);
        /* You might want to handle this error condition differently */
        exit(EXIT_FAILURE);
    }

    new_node->n = value;
    new_node->prev = NULL;
    new_node->next = *stack;

    if (*stack != NULL)
        (*stack)->prev = new_node;

    *stack = new_node;
}
