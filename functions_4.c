#include "monty.h"
/**
 * pstr - print string
 * @stack: Addres of first element of stack
 * @line_number: Num of line
 */
void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = (*stack);
	(void)line_number;
	while (tmp)
	{
		if (!stack || !(*stack))
			goto exi;
		if (tmp->n == 0)
			goto exi;
		if (tmp->n < 32 || tmp->n > 126)
			goto exi;
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
exi: printf("\n");
}
