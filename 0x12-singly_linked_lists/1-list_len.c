#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a lnked list
 * @h: pointer to the list_t list
 *
 * Retrun: number of element in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
