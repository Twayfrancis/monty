#include "monty.h"
/**
 * pint - prints value at top of stack
 * @stack: double pointer to head of the stack
 * @line_number: the line number of the instruction being executed
 */
void pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
