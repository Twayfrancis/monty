#include "monty.h"

/**
 * get_opcode_func - selects the correct function to perform the opcode
 * @s: opcode passed to the program
 * Return: a pointer to the function given the opcode or NULL if not found
 */

void (*get_opcode_func(char *s))(stack_t **stack, unsigned int tway)
{

	int i;
	instruction_t mty[] = {
		{"pall", mty_pall},
		{"push", mty_push},
		{"pop", mty_pop},
		{"add", mty_add},
		{"swap", mty_swap},
		{"pint", mty_pint},
		{"nop", mty_nop},
		{"pchar", mty_pchar},
		{"pstr", mty_pstr},
		{"rotl", mty_rotl},
		{"rotr", mty_rotr},
		{"sub", mty_sub},
		{"div", mty_div},
		{"mul", mty_mul},
		{"mod", mty_mod},
		{"queue", mty_queue},
		{"stack", mty_stack},
		{NULL, NULL}
	};

	i = 0;
	while (i < 17)
	{
		if (strcmp(s, (mty[i]).opcode) == 0)
		{
			return (*(mty[i]).f);
		}
		i++;
	}
	return (NULL);
}
