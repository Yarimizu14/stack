#ifndef _LINKED_LIST_STACK
#define _LINKED_LIST_STACK

typedef struct node_ {
    int val;
    struct node_ *next;
} node;

typedef struct linked_list_stack_ {
    node *l;
} linked_list_stack;

linked_list_stack *new_linked_list_stack();
void push_linked_list_stack(linked_list_stack* stack, int val);
int pop_linked_list_stack(linked_list_stack* stack);
bool is_empty_linked_list_stack(linked_list_stack* stack);

#endif
