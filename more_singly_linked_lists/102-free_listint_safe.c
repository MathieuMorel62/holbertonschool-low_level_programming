#include "lists.h"

/**
 * free_listint_safe - 
 * @h:
 *
 * Return:
*/

size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current = *h;
    listint_t *temp;
    listint_t *check = *h;

    while (current != NULL)
    {
        temp = current;
        current = current->next;
        check = *h;
        while (check != current)
        {
            if (check == temp)
            {
                current = NULL;
                break;
            }
            check = check->next;
        }
        if (current != NULL)
        {
            free(temp);
            count++;
        }
    }
    *h = NULL;
    return count;
}
