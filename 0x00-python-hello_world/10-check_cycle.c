#include "lists.h"

/**
 * check_cycle - checks for cycle in list
 * @list: list input
 * Return: 1 if there is a cycle and 0 if not
 */

int check_cycle(listint_t *list)
{
	listint_t *temp1;
	listint_t *temp2;

	if (list == NULL)
		return (0);

	temp1 = list;
	temp2 = list;

	while (temp2->next != NULL && temp2->next->next != NULL)
	{
		temp1 = temp1->next;
		temp2 = temp2->next->next;

		if (temp1 == temp2)
		{
			temp1 = list;
			while (temp1 != temp2)
			{
				temp1 = temp1->next;
				temp2 = temp2->next;
			}
			return (1);
		}
	}
	return (0);
}
