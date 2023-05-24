#include "monty.h"
int push(int argc, char* argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "L%d: usage: push int\n", __LINE__);
		return (EXIT_FAILURE);
	}
	int value = atoi(argv[1]);
	
	if (value == 0)
	{
		fprintf(stderr, "L%d: invalid int\n", __LINE__);
		return (EXIT_FAILURE);
	}
	stack[stack_top++] = value;
	return (EXIT_SUCCESS);
}
