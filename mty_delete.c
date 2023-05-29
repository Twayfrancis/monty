#include "monty.h"
/**
 * delete_stack_head - deletes the head node of the stack
 * @head: head of the stack
 * Return: 1 if true, -1 if false
 */

int delete_stack_head(stack_t **head)
{
	stack_t *temp;

	if (*head == NULL)
		return (-1);
	temp = (*head);
	if (temp->next == NULL)
	{
		free(temp);
		(*head) = NULL;
		return (1);
	}
	(*head) = (*head)->next;
	(*head)->prev = NULL;
	free(temp);
	return (1);
}
