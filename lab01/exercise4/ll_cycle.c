#include "ll_cycle.h"
#include <stddef.h>

int ll_has_cycle(node *head) {
    /* TODO: Implement ll_has_cycle */
    if (head == NULL || head->next == NULL || head->next->next == NULL) {
        return 0;
    }

    node *tortoise = head->next;
    node *hare = head->next->next;

    while (tortoise != hare) {
        if (hare->next == NULL || hare->next->next == NULL) {
            return 0;
        }
        tortoise = tortoise->next;
        hare = hare->next->next;
    }
    return 1;
}
