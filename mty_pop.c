#include "monty.h"
/**
 */
void mty_pop(stack_t **stack, unsigned int tway)
{
	int result;

	result = delete_stack_head(stack);
	if (result != 1)
	{
		printf("L%d: can't pop an empty stack\n", tway);
		value[2] = 1;
		return;
	}
}
