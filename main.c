#include "monty.h"

#define MAX_LINE_LENGTH 1024

bus_t bus = {NULL, NULL, NULL, 0};

int main(int argc, char *argv[])
{
	char line[MAX_LINE_LENGTH];
	FILE *file;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;

       	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		if (fgets(line, MAX_LINE_LENGTH, file) == NULL)
		{
			break;
		}
		read_line = strlen(line);
		bus.content = line;
		counter++;
		if (read_line > 0)
		{
			execute(line, &stack, counter, file);
		}
	}
	free_list(stack);
	fclose(file);
	return (0);
}
