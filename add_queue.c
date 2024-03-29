#include "monty.h"

/**
 * add_queue - add node to the tail stack
 * @hd: head of the stack
 * @num: new_value
 * Return: no return
 */
void add_queue(stack_t **hd, int num)
{
	stack_t *new_node = malloc(sizeof(stack_t));
	stack_t *aux;

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Unable to allocate memory\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->next = NULL;
	if (*hd == NULL)
	{
		*hd = new_node;
		new_node->prev = NULL;
	}
	else
	{
		for (aux = *hd; aux->next != NULL; aux = aux->next)
		{}
		aux->next = new_node;
		new_node->prev = aux;
	}
}

