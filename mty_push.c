#include "monty.h"

/**
 * mty_push - pushes a value to the stack
 * @stack: the head of the stack
 * @ln: line number where the opcode is located
 */

void mty_push(stack_t **stack, unsigned int tway)
{
	int result;

	if (value[1] == 0)
		result = add_to_stack(stack, value[0]);
	else
		result = add_to_queue(stack, value[0]);
	if (result < 0)
	{
		printf("L%d: usage: push integer\n", tway);
		value[2] = 1;
		return;
	}
}
