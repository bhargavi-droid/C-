#include <stdio.h>
#include <stdlib.h>
// Node structure for linked list
typedef struct Node {
    int data;
    struct Node* next;
} Node;
// Stack structure
typedef struct Stack {
    Node* top;
} Stack;
// Function to create a stack
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}
// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}
// Function to push an element onto the stack
void push(Stack* stack, int item) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = item;
    newNode->next = stack->top;
    stack->top = newNode;
    printf("%d pushed to stack\n", item);
}
// Function to pop an element from the stack
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return INT_MIN;
    }
    Node* temp = stack->top;
    int popped = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return popped;
}
// Function to peek at the top element of the stack
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return INT_MIN;
    }
    return stack->top->data;
}
// Function to free the stack
void freeStack(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
    free(stack);
}
int main() {
    Stack* stack=createStack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    printf("%d popped from stack\n", pop(stack));
    printf("Top element is %d\n", peek(stack));
    freeStack(stack);
    return 0;
}
