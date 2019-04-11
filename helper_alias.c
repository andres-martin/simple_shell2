#include "holberton.h"
alias_t *add_alias_end(alias_t **head, char *name, char *value)
{
	alias_t *new_node = malloc(sizeof(alias_t));
	alias_t *last;

	if (!new_node)
        	return (NULL);
    new_node->next = NULL;
    new_node->name = malloc(sizeof(char) * (_strlen2(name) + 1));
    if (!new_node->name)
    {

        free(new_node);

        return (NULL);

    }

    new_node->value = value;

    _strcpy(new_node->name, name);


    if (*head)

    {

        last = *head;

        while (last->next != NULL)

            last = last->next;

        last->next = new_node;

    }

    else

        *head = new_node;


    return (new_node);

}

void free_args(char **args, char **front)
{
    size_t i;

    for (i = 0; args[i] || args[i + 1]; i++)
        free(args[i]);

    free(front);
}
