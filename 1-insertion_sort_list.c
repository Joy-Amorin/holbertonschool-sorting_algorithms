
#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list using the Insertion sort
 *
 *@list: list_t node.
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *node, *tmp, *aux;

	if (list == NULL && *list == NULL)
		return;
	node = *list;
	while ((node = node->next))
	{
		tmp = node;
		while (tmp->prev && tmp->prev->n > tmp->n)
		{
			aux = tmp->prev;
			if (tmp->next)
				tmp->next->prev = aux;
			if (aux->prev)
				aux->prev->next = tmp;
			else
				*list = tmp;
			aux->next = tmp->next;
			tmp->prev = aux->prev;
			tmp->next = aux;
			aux->prev = tmp;
			print_list(*list);
		}
	}
}
