#ifndef MERGE_LISTS_H
#define MERGE_LISTS_H

struct list_node
{
    int val;
    struct list_node* next;
};

struct list_node* merge_two_lists(struct list_node* list1, struct list_node* list2);

#endif