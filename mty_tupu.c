#include "monty.h"

/**
 * mty_rotl - rotates the top element of the stack to the bottom
 * @stack: head of the stack
 * @tway: line number
 */

void mty_rotl(stack_t **stack, unsigned int tway)
{
	stack_t *temp, *temp2;

	(void) tway;
	temp = (*stack);
	if (temp == NULL)
		return;
	temp2 = temp;
	if (temp->next == NULL)
		;
	else
	{
		(*stack) = (*stack)->next;
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->next = temp;
		temp->prev = temp2;
		temp->next->prev = NULL;
		temp->next = NULL;
	}
}

/**
 * mty_rotr - rotates the last element of the stack to the top
 * @stack: head of the stack
 * @tway: line number
 */

void mty_rotr(stack_t **stack, unsigned int tway)
{
	stack_t *temp, *temp2;

	(void) tway;
	temp = (*stack);
	if (temp == NULL)
		return;
	temp2 = temp;
	if (temp->next == NULL)
		;
	else
	{
		while (temp2->next != NULL)
			temp2 = temp2->next;
		temp2->prev->next = NULL;
		temp2->prev = NULL;
		temp2->next = temp;
		temp->prev = temp2;
		(*stack) = temp2;
	}
}

/**
 * mty_stack - sets the format of the data to a stack
 * @stack: head of the stack
 * @tway: line number
 */


void mty_stack(stack_t **stack, unsigned int tway)
{
	(void) stack;
	(void) tway;
}

/**
 * mty_queue - sets teh format of the data to a queue
 * @stack: head of the stack
 * @tway: line number of the opcode
 */

void mty_queue(stack_t **stack, unsigned int tway)
{
	(void) stack;
	(void) tway;
}
