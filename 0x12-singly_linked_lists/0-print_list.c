#include <stdio.h>
#include "lists.h"

/**
 * print_list -  this prints all the elements of a linked list
 * @h: points to the list_t list to print
 *
 * Return: Returns the number of nodes printed
 */
size_t print_list(const list_t *a)
{
 size_t b = 0;

 while (a)
 {
 if (!a->str)
 printf("[0] (nil)\n");
 else
 printf("[%u] %s\n", a->len, a->str);
 a = a->next;
 b++;
 }

 return (b);
}
