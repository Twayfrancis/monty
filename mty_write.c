#include "monty.h"
/**
 * print_stack - prints the stack
 * @head: head of the stack
 * Return: 1 if success and 0 if not
 */

int print_stack(stack_t **head)
{
	stack_t *temp;

	temp = (*head);
	if (temp == NULL)
		return (-1);
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (0);
}
