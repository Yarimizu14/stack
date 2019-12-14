#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "linked_list_stack.h"

linked_list_stack *new_linked_list_stack() {
    linked_list_stack* stack;
    stack = malloc(sizeof(linked_list_stack));
    stack->l = NULL;

    return stack;
}

node *new_node(int val) {
    node *new_node = (node *)malloc(sizeof(node));
    new_node->val = val;
    new_node->next = NULL;
    return new_node;
}

void push_linked_list_stack(linked_list_stack* stack, int val) {
    node *nn = new_node(val);
    node *head = stack->l;
    nn->next = head;
    stack->l = nn;
}

int pop_linked_list_stack(linked_list_stack* stack) {
    if (is_empty_linked_list_stack(stack)) {
        return 0;
    }
    node *head = stack->l;
    node *next = head->next;
    stack->l = next;
    int ret = head->val;
    free(head);
    return ret;
}

bool is_empty_linked_list_stack(linked_list_stack* stack) {
    return stack->l == NULL;
}

int main() {
    linked_list_stack* stack = new_linked_list_stack();
    if (is_empty_linked_list_stack(stack)) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    push_linked_list_stack(stack, 3);
    if (is_empty_linked_list_stack(stack)) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    push_linked_list_stack(stack, 5);
    if (is_empty_linked_list_stack(stack)) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    push_linked_list_stack(stack, 8);
    int a = pop_linked_list_stack(stack);
    printf("first stack ----> %d\n", a);
    int b = pop_linked_list_stack(stack);
    printf("second stack ----> %d\n", b);
    int c = pop_linked_list_stack(stack);
    printf("third stack ----> %d\n", c);
    if (is_empty_linked_list_stack(stack)) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    return 0;
}