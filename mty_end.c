#include "monty.h"
/**
 * delete_stack_end - deletes the end of the stack
 * @head: head of the stack
 * Return: 1 if success and -1 if failed
 */

int delete_stack_end(stack_t **head)
{
	stack_t *temp;

	if (*head == NULL)
		return (-1);
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->prev->next = NULL;
	free(temp);
	return (1);
}
