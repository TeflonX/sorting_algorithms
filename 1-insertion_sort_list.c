#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	int store, flag;

	listint_t *trav, *first, *second;

	trav = first = second = *list;

	while (trav->next)
	{
		trav = trav->next;
		store = trav->n;
		first = trav->prev;
		flag = 0;

		while (first->n > store)
		{
			second = first->next;
			second->n = first->n;
			print_list(*list);
			flag = 1;
			if (first->prev)
				first = first->prev;
			if (!(first->prev))
				break;
		}
		if (flag == 1)
			(second->prev)->n = store;
	}

}
