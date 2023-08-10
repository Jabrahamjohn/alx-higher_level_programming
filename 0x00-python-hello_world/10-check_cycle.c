#include "lists.h"

/**
 * check_cycle - checks if list is cycle
 * @list: types listint_t
 * Return: always int
 * case: 1 if true, 0 false
 */

int check_cycle(listint_t *list)
{
	listint_t *one = list, *two = list;

	while (one != NULL && two != NULL && two->next != NULL)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
			return (1);
	}
	return (0);
}