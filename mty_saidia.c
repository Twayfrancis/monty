#include "monty.h"
/**
 */
int check_if_number(char *str)
{
	int i;

	if (str && *str == '-')
		str++;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
/**
 */
int check_if_push(char *tw[], int njia)
{
	if (strcmp(tw[0], "push") == 0)
	{
		if (tw[1][0] != '\0' && check_if_number(tw[1]))
			value[0] = atoi(tw[1]);
		else
		{
			printf("L%d: usage: push integer\n", njia);
			value[2] = 1;
			return (0);
		}
		return (1);
	}
	return (0);
}
/**
 */
int is_ascii(int c)
{
	if (c < 0 || c > 127)
		return (0);
	return (1);
}
/**
 */
void check_data_structure(char *opcode)
{
	if (strcmp(opcode, "stack") == 0)
		value[1] = 0;
	else if (strcmp(opcode, "queue") == 0)
		value[1] = 1;
}
