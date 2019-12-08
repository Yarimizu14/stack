#ifndef _ARRAY_STACK
#define _ARRAY_STACK

const int STACK_SIZE = 50;

typedef struct array_stack_ {
    int top;
    int stk[STACK_SIZE];
} array_stack;

array_stack *new_array_stack();
void push_array_stack(array_stack* stack, int val);
int pop_array_stack(array_stack* stack);
bool is_empty_array_stack(array_stack* stack);

#endif
