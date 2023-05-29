#include "monty.h"
/**
 * add_to_stack - adds the node to the beginning of the stack
 * @head: head of the stack
 * @n: number value for the stack
 * Return: 1 if success and -1 if fail
 */

int add_to_stack(stack_t **head, int n)
{
	stack_t *new_node;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		return (-1);
	}
	new_node->n = n;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (1);
}
