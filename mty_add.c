#include "monty.h"
/**
 */
void mty_add(stack_t **stack, unsigned int tway)
{
	stack_t *temp;
	stack_t *temp2;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't add, stack too short\n", tway);
		value[2] = 1;
		return;
	}
	temp = (*stack);
	temp2 = temp->next;
	temp->n = temp->next->n + temp->n;
	temp->next = temp2->next;
	if (temp2->next != NULL)
		temp2->next->prev = temp;
	else
		temp->next = NULL;
	free(temp2);
}
