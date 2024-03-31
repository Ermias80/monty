#include "monty.h"

/**
 * excute - Handle the execution of different opcodes
 * @opcode: Opcode to be executed
 * @hd: Double pointer to the top of stack
 * @num: Number of line
 */
void excute(stack_t **hd, char *opcode, unsigned int num)
{
	if (strcmp(opcode, "pall") == 0)
		pall(*hd);
	else if (strcmp(opcode, "pint") == 0)
		pint(*hd, num);
	else if (strcmp(opcode, "pop") == 0)
		pop(hd, num);
	else if (strcmp(opcode, "sub") == 0)
		sub(hd, num);
	else if (strcmp(opcode, "div") == 0)
		stack_div(hd, num);
	else if (strcmp(opcode, "mul") == 0)
		mul(hd, num);
	else if (strcmp(opcode, "mod") == 0)
		mod(hd, num);
	else if (strcmp(opcode, "pchar") == 0)
		pchar(hd, num);
	else if (strcmp(opcode, "pstr") == 0)
		pstr(hd);
	else if (strcmp(opcode, "add") == 0)
		add(hd, num);
	else if (strcmp(opcode, "nop") == 0)
		nop(hd, num);
	else if (strcmp(opcode, "swap") == 0)
		swap(hd, num);
	else if (strcmp(opcode, "rotl") == 0)
		rotl(hd);
	else if (strcmp(opcode, "rotr") == 0)
		rotr(hd);
	else if (strcmp(opcode, "stack") == 0)
		nop(hd, num);
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", num, opcode);
		free_list(*hd);
		exit(EXIT_FAILURE);
	}
}
