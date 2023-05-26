#include "monty.h"
int main(int argc, char* argv[]) 
{
	FILE* file = fopen(argv[1], "r");

    if (argc != 2) {
        printf("Usage: ./monty <filename>\n");
        return (1);
    }

    if (file == NULL) {
        printf("Error: Unable to open file\n");
        return (1);
    }

    stack_t stack = createStack();
    char line[256];

    while (fgets(line, sizeof(line), file)) {
    }

    fclose(file);
    return 0;
}
