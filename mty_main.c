#include "monty.h"
int value[3] = {0, 0, 0};
/**
 */
int main(int argc, char *argv[])
{
	char *path, *line, *tw[2];
	stack_t *head;
	size_t len, njia, result;
	ssize_t read;
	FILE *fs;
	void (*fptr)(stack_t **stack, unsigned int tway);

	head = NULL;
	check_argc(argc);
	line = NULL;
	path = argv[1];

	fs = fopen(path, "r");
	check_file_stream(fs, path);
	for (njia = 1; (read = getline(&line, &len, fs)) != -1; njia++)
	{
		if (check_empty(line))
			continue;
		result = tokenize_line(line, tw);
		
		if (result == 0)
			continue;

		check_if_push(tw, njia);
		check_fail(line, fs, head);
		check_data_structure(tw[0]);
		fptr = get_opcode_func(tw[0]);
		check_opcode(fptr, njia, tw[0]);
		check_fail(line, fs, head);

		(*fptr)(&head, njia);
		check_fail(line, fs, head);
		clear_strings(tw);
	}
	free(line);
	fclose(fs);
	free_stack(head);
	return (0);
}	
