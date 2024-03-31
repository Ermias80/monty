#include "monty.h"

/**
 * main - entry point to monty code interpreter
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	char *opcode = NULL, line[1024], *delim = " \n\t\r";
	unsigned int lin_num = 1;
	stack_t *top = NULL;
	FILE *file;

	FIFO = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	for (; fgets(line, sizeof(line), file) != NULL; lin_num++)
	{
		opcode = strtok(line, delim);
		if (!opcode)
			continue;
		if (opcode[0] == '#')
			continue;
		stack(&top, opcode, lin_num);
	}
	fclose(file);
	free_list(top);
	return (0);
}
