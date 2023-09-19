#include <stdlib.h>
#include "lists.h"

/**
 * list_len - the lenght the number of elements in a linked list
 * @h: points to the list_t list
 *
 * Return: number of elements in i
 */
size_t list_len(const list_t *i)
{
 size_t j = 0;

 while (i)
 {
 j++;
 i = i->next;
 }
 return (j);
}
