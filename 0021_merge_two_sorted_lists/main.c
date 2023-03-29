#include <stdio.h>
#include <stdlib.h>
#include "merge_lists.h"

struct list_node* create_node(int val) {
    struct list_node* node = malloc(sizeof(struct list_node));
    node->val = val;
    node->next = NULL;

    return node;
}

void free_list(struct list_node* head) {
    while (head != NULL) {
        struct list_node* current = head;
        head = head->next;
        free(current);
    }
}

int main() {
    struct list_node* list1 = create_node(1);
    list1->next = create_node(2);
    list1->next->next = create_node(4);

    struct list_node* list2 = create_node(1);
    list2->next = create_node(3);
    list2->next->next = create_node(4);

    struct list_node* merge_lists = merge_two_lists(list1, list2);

    free_list(merge_lists);

    return 0;
}