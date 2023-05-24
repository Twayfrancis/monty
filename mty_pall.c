#include "monty.h"
int pall()
{
	if (stack_top == 0)
	{
		return (EXIT_SUCCESS);
	}
	for (int i = stack_top -  1; i >= 0; i--)
	{
		printf("%d\n", stack[i]);
	}
	return (EXIT_SUCCESS);
}

