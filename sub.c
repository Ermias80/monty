#include "monty.h"

/**
 * sub - subtraction
 * @hd: stack head
 * @count: line number
 *
 * Return: no return
 */
void sub(stack_t **hd, unsigned int count)
{
	stack_t *aux;
	int difference, nodes;

	aux = *hd;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	switch(nodes){
		case 0:
		case 1:
			fprintf(stderr, "L%d: can't sub, stack too short\n", count);
			fclose(bus.file);
			free(bus.content);
			free_list(*hd);
			exit(EXIT_FAILURE);
			break;
		default:
			aux = *hd;
			difference = aux->next->n - aux->n;
			aux->next->n = difference;
			*hd = aux->next;
			free(aux);
			break;
	}
}
