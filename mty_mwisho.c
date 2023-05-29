#include "monty.h"
/**
 * mty_sub - subtracts the top element of stack from the second element
 * @stack: head to the stack
 * @tway: line number where the opcode is located
 */

void mty_sub(stack_t **stack, unsigned int tway)
{
	stack_t *temp, *temp2;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't sub, stack too short\n", tway);
		value[2] = 1;
		return;
	}
	temp = (*stack);
	temp2 = temp->next;
	temp->n = temp2->n - temp->n;
	temp->next = temp2->next;
	if (temp2->next != NULL)
		temp2->next->prev = temp;
	else
		temp->next = NULL;
	free(temp2);
}

/**
 * mty_div - divides the second top element of stack from the top element
 * @stack: head to the stack
 * @tway: line number where the opcode is located
 */

void mty_div(stack_t **stack, unsigned int tway)
{
	stack_t *temp, *temp2;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't div, stack too short\n", tway);
		value[2] = 1;
		return;
	}
	temp = (*stack);
	temp2 = temp->next;
	if (temp->n == 0)
	{
		printf("L%d: division by zero\n", tway);
		value[2] = 1;
		return;
	}

	temp->n = (int)(temp2->n / temp->n);
	temp->next = temp2->next;
	if (temp2->next != NULL)
		temp2->next->prev = temp;
	else
		temp->next = NULL;
	free(temp2);
}

/**
 * mty_mul - multiplies the top two elements of the stack
 * @stack: head to the stack
 * @tway: line number where the opcode is located
 */

void mty_mul(stack_t **stack, unsigned int tway)
{
	stack_t *temp, *temp2;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't mul, stack too short\n", tway);
		value[2] = 1;
		return;
	}
	temp = (*stack);
	temp2 = temp->next;
	temp->n = temp2->n * temp->n;
	temp->next = temp2->next;
	if (temp2->next != NULL)
		temp2->next->prev = temp;
	else
		temp->next = NULL;
	free(temp2);
}

/**
 * mty_mod - divides second top element by top element and gets remainder
 * @stack: head to the stack
 * @tway: line number where the opcode is located
 */

void mty_mod(stack_t **stack, unsigned int tway)
{
	stack_t *temp, *temp2;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't mod, stack too short\n", tway);
		value[2] = 1;
		return;
	}
	temp = (*stack);
	temp2 = temp->next;
	if (temp->n == 0)
	{
		printf("L%d: division by zero\n", tway);
		value[2] = 1;
		return;
	}
	temp->n = temp2->n % temp->n;
	temp->next = temp2->next;
	if (temp2->next != NULL)
		temp2->next->prev = temp;
	else
		temp->next = NULL;
	free(temp2);
}
