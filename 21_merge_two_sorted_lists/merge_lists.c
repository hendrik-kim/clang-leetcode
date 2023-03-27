#include <stdio.h>
#include "merge_lists.h"

struct list_node* merge_two_lists(struct list_node* list1, struct list_node* list2)
{
    struct list_node* head = malloc(sizeof(struct list_node));
    struct list_node* tail = head;


    while (list1 != NULL && list2 != NULL) {
        if (list1->val < list2->val) {
            tail->next = list1;
            list1 = list1->next;
        }
        else {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }

    return head->next;
};