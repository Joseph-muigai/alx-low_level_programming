#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list
 *@head: double pointer to the list
 *@str: string to add
 *Return: the address of the new element, or NULL if it failed
 */
 list_t *add_node_end(list_t **head, const char *str)
 {
        list_t *new;
        list_t *tmp = *head;
        unsigned int i = 0;

        while (str[i])
                i++;
        
        new = malloc(sizeof(list_t));

        if (!new)
                return (NULL);
        
        new->str = strdup(str);
        new->len = i;
        new->next = NULL;

        if (*head = NULL)
        {
                *head = new;
                return (new);
        }

        while (tmp->next)
                tmp = tmp->next;
        
        tmp->next = new;
        return (new);
 }

