#include "monty.h"

/**
 * mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @hd: stack head
 * @count: line_number
 * Return: no return
*/
void mod(stack_t **hd, unsigned int count)
{
	stack_t *h;
	int len = 0, result;
	h = *hd;

	while (h)
	{
		h = h->next;
		len++;
	}
	switch (len) {
		case 0:
		case 1:
			fprintf(stderr, "L%d: can't mod, stack too short\n", count);
			fclose(bus.file);
			free(bus.content);
			free_list(*hd);
			exit(EXIT_FAILURE);
			break;
		default:
			h = *hd;
			if (h->n == 0)
			{
				fprintf(stderr, "L%d: division by zero\n", count);
				fclose(bus.file);
				free(bus.content);
				free_list(*hd);
				exit(EXIT_FAILURE);
			}
			result = h->next->n % h->n;
			h->next->n = result;
			*hd = h->next;
			free(h);
			break;
	}
}

