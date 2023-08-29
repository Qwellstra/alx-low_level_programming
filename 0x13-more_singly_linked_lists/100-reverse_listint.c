#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev = NULL;
    listint_t *current = *head;
    listint_t *next = NULL;

    while (current)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;

    return (*head);
}

int main(void)
{
    listint_t *head = NULL;

    /* Add nodes to the linked list (you can adapt this part to your needs) */
    add_nodeint(&head, 10);
    add_nodeint(&head, 20);
    add_nodeint(&head, 30);
    add_nodeint(&head, 40);

    printf("Original linked list:\n");
    print_listint(head);

    /* Reverse the linked list */
    reverse_listint(&head);

    printf("Reversed linked list:\n");
    print_listint(head);

    /* Free memory (you can adapt this part to your needs) */
    free_listint(head);

    return (0);
}
