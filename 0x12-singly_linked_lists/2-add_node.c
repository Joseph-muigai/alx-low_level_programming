#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the list
 * @str: string to add
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new;
    unsigned int i = 0;

    while (str[i])
        i++;

    new = malloc(sizeof(list_t));

    if (!new)
        return (NULL);

    new->str = strdup(str);
    new->len = i;
    new->next = (*head);
    (*head) = new;

    return (*head);

}