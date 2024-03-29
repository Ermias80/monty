#include "monty.h"
/**
 * add - adds the top two elements of the stack.
 * @hd: stack head
 * @count: line_number
 * Return: no return
*/
void add(stack_t **hd, unsigned int count)
{
	stack_t *h;
	int len = 0, aux;

	h = *hd;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_list(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*hd = h->next;
	free(h);
}
