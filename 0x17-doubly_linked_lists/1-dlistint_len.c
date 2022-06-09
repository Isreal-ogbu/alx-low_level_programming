#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - find number of nodes of doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t nd = 0;
    const dlistint_t *current = h;

    while(current != NULL)
    {
        current = current->next
        nd++; 
    }

    return (nd);

}
