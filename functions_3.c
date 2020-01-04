#include "monty.h"

/**
 * push - Inizialice a node in the begin of the list.
 * @stack: Head of the double linked list.
 * @line_number: Line of execution of command.
 * Return: Nothing, couse the struct specifications.
 */
void push(stack_t **stack, unsigned int line_number)
{
	stack_t *new_node;
	char *value;
	int operator;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		free(new_node);
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	value = strtok(NULL, " \n\t\r");
	operator = manage_error(value, line_number);
	new_node->n = operator;
	new_node->prev = NULL;

	if (*stack == NULL)
	{
		*stack = new_node, new_node->next = NULL;
		return;
	}
	(*stack)->prev = new_node;
	new_node->next = *stack;
	*stack = new_node;
}

/**
 * nop - Do nothing.
 * @stack: Head of the double linked list.
 * @line_number: Line of execution of command.
 * Return: Nothing, couse the struct specifications.
 */

void nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * _rotl - Pass the top to the bottom of the linked list.
 * @stack: Head of the double linked list.
 * @line_number: Line of execution of command.
 * Return: Nothing, couse the struct specifications.
 */
void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp1;
	stack_t *tmp2;

	(void)line_number;
	tmp1 = *stack;
	tmp2 = (*stack)->next;

	while (tmp1->next != NULL)
		tmp1 = tmp1->next;

	tmp1->next = *stack;
	(*stack)->prev = tmp1;
	(*stack)->next = NULL;
	*stack = tmp2;
	(*stack)->prev = NULL;
}

/**
 * _rotr - Pass the top to the bottom of the linked list.
 * @stack: Head of the double linked list.
 * @line_number: Line of execution of command.
 * Return: Nothing, couse the struct specifications.
 */
void _rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp, *current;

	(void)line_number;
	tmp = NULL;
	current = *stack;

	while (current != NULL)
	{
		tmp = current->prev;
		current->prev = current->next;
		current->next = tmp;
		current = current->prev;
	}
	if (tmp != NULL)
		*stack = tmp->prev;
}
