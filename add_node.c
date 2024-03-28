#include "monty.h"

/**
 * add_node - add node to the head stack
 * @hd: head of the stack
 * @num: new_value
 * Return: no return
 */
void add_node(stack_t **hd, int num)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		fprintf(stderr, "Error: Unable to allocate memory\n");
		exit(EXIT_FAILURE);
	}
	new_node->n = num;
	new_node->prev = NULL;
	new_node->next = *hd;

	if (*hd != NULL)
		(*hd)->prev = new_node;
	*hd = new_node;
}
