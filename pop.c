#include "monty.h"

/**
 * pop - Removes the top element of the stack.
 * @hd: Stack head.
 * @count: Line number.
 * Return: No return value.
 */
void pop(stack_t **hd, unsigned int count)
{
	switch (*hd != NULL)
	{
		case 0:
			fprintf(stderr, "L%d: can't pop an empty stack\n", count);
			fclose(bus.file);
			free(bus.content);
			free_list(*hd);
			exit(EXIT_FAILURE);
			break;
		case 1:
			{
				stack_t *temp = *hd;
				*hd = temp->next;
				free(temp);
			}
	}
}
