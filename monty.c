#include "monty.h"
int main(int argc, char *argv[])
{
	FILE *file = fopen(argv[1], "r");
	stack_t *stack = NULL;
    char line[256];
    char operation[10];
    unsigned int line_number = 1;
    int argument;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./monty <filename>\n");
        return EXIT_FAILURE;
    }

    if (file == NULL)
    {
        fprintf(stderr, "Error: Unable to open file %s\n", argv[1]);
        return EXIT_FAILURE;
    }
    while (fgets(line, sizeof(line), file))
    {
        if (sscanf(line, "%s %d", operation, &argument) == 2) 
        {
            executeOperation(&stack, operation, line_number);
        }
        line_number++;
    }

    fclose(file);
    return EXIT_SUCCESS;
}
