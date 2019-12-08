#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "array_stack.h"

array_stack *new_array_stack() {
    array_stack* stack;
    stack = malloc(sizeof(array_stack));

    stack->top = 0;

    return stack;
};

void push_array_stack(array_stack* stack, int val) {
    stack->stk[stack->top] = val;
    stack->top++;
}

int pop_array_stack(array_stack* stack) {
    stack->top--;
    return stack->stk[stack->top];
}

bool is_empty_array_stack(array_stack* stack) {
    return stack->top <= 0;
}

int main() {
    array_stack* stack = new_array_stack();
    if (is_empty_array_stack(stack)) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    push_array_stack(stack, 3);
    if (is_empty_array_stack(stack)) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    push_array_stack(stack, 5);
    if (is_empty_array_stack(stack)) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    push_array_stack(stack, 8);
    int a = pop_array_stack(stack);
    printf("first stack ----> %d\n", a);
    int b = pop_array_stack(stack);
    printf("second stack ----> %d\n", b);
    int c = pop_array_stack(stack);
    printf("third stack ----> %d\n", c);
    if (is_empty_array_stack(stack)) {
        printf("stack is empty\n");
    } else {
        printf("stack is not empty\n");
    }
    return 0;
};

