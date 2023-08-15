#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int top;
} Stack;

void initializeStack(Stack *stack) {
    stack->top = -1;
}

int isStackEmpty(Stack *stack) {
    return stack->top == -1;
}

int isStackFull(Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

void push(Stack *stack, int value) {
    if (isStackFull(stack)) {
        printf("Stack overflow!\n");
        return;
    }

    stack->data[++stack->top] = value;
}

int pop(Stack *stack) {
    if (isStackEmpty(stack)) {
        printf("Stack underflow!\n");
        return -1;
    }

    return stack->data[stack->top--];
}

void reverseList(int numbers[], int size) {
    Stack stack;
    initializeStack(&stack);

    // Push all the numbers onto the stack
    for (int i = 0; i < size; i++) {
        push(&stack, numbers[i]);
    }

    // Pop the numbers from the stack and store them back into the array
    for (int i = 0; i < size; i++) {
        numbers[i] = pop(&stack);
    }
}

int main() {
    int numbers[] = {12, 34, 78, 23, 90, 67};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    reverseList(numbers, size);

    printf("Reversed List: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
