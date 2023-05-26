#include "monty.c"
void execute(stack_t stack, char* operation, int argument)
{
	if (strcmp(operation, "push") == 0)
	{
		push(stack, argument);
	}
	else if (strcmp(operation, "pop") == 0)
	{
		int data = pop(stack);
		printf("Popped value: %d\n", data);
	}
	else
	{
		printf("Error: Unknown operation '%s'\n", operation);
	}
}
