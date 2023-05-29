#include "monty.h"
/**
 * mty_swap - swaps the value of the first two elements on the stack
 * @stack: head to the stack
 * @tway: line number where opcode is located
 */

void mty_swap(stack_t **stack, unsigned int tway)
{
	stack_t *temp, *temp2;
	int temp_value;

	if ((*stack) == NULL || (*stack)->next == NULL)
	{
		printf("L%d: can't swap, stack too short\n", tway);
		value[2] = 1;
		return;
	}
	temp = (*stack);
	temp2 = temp->next;
	temp_value = temp->n;
	temp->n = temp2->n;
	temp2->n = temp_value;
}

/**
 * mty_nop - operation does nothing
 * @stack: head to the stack
 * @tway: line number where opcode is located
 */
void mty_nop(stack_t **stack, unsigned int tway)
{
	(void) stack;
	(void) tway;
}

/**
 * mty_pchar - prints teh char at the top of the stack
 * @stack: head to the stack
 * @tway: line number where opcode is located
 */

void mty_pchar(stack_t **stack, unsigned int tway)
{
	int c;
	stack_t *temp;

	temp = (*stack);
	if (temp == NULL)
	{
		printf("L%d: can't pchar, stack empty\n", tway);
		value[2] = 1;
		return;
	}
	c = temp->n;
	if (!(is_ascii(c)))
	{
		printf("L%d: can't pchar, value out of range\n", tway);
		value[2] = 1;
		return;
	}
	putchar(c);
	putchar('\n');
}

/**
 * mty_pstr - prints the string starting at the stack
 * @stack: head to the top of the stack
 * @tway: line number of the opcode
 * Description: string stops where stack is over, the value is 0 or the value
 * is not an ascii value
 */

void mty_pstr(stack_t **stack, unsigned int tway)
{
	stack_t *temp;
	int c;

	(void) tway;
	temp = (*stack);
	while (temp != NULL && temp->n != 0 && is_ascii(temp->n))
	{
		c = temp->n;
		putchar(c);
		temp = temp->next;
	}
	putchar('\n');
}
