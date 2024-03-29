#include "monty.h"

/**
 * add_f - Adds the top two elements of the stack.
 * @hd: Stack head
 * @count: Line number
 * Return: No return
 */
void add_f(stack_t **hd, unsigned int count)
{
	stack_t *temp = *hd;
	int len = 0, sum;

	for (; temp != NULL; temp = temp->next)
		len++;
	switch (len >= 2)
	{
		case 0:
			fprintf(stderr, "L%d: can't add, stack too short\n", count);
			fclose(bus.file);
			free(bus.content);
			free_list(*hd);
			exit(EXIT_FAILURE);
			break;
		case 1:
			{
				temp = *hd;
				sum = temp->n + temp->next->n;
				temp->next->n = sum;
				*hd = temp->next;
				free(temp);
			}
	}
}
