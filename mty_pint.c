#include "monty.h"
/**
 */
void mty_pint(stack_t **stack, unsigned int tway)
{
	stack_t *head;

	head = *stack;
	if (head == NULL)
	{
		printf("L%d: can't pint, stack empty\n", tway);
		value[2] = 1;
		return;
	}

	printf("%d\n", head->n);
}
