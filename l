#include "monty.h"
/**
 * main - main function
 * Return: void
 */
int main(void)
{
	stack_t *stack = NULL;  /*Create an empty stack*/
	/*Push some values onto the stack*/
	push(&stack, 1);
	push(&stack, 2);
	push(&stack, 3);
	/*Print the stack using the pall function*/
	pall(&stack);
	return (0);
}
