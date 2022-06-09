#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print elements of doubly linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t nd = 0;
    const dlistint_t *current = h;

    while(current != NULL)
    {
        printf("%i\n", current->n);
        current = current->next;
        nd ++;
    }

    return(nd)

}
