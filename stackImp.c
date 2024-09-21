#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Define the maximum size of the stack

// Stack structure definition
struct Stack {
    int items[MAX];
    int top;
};

// Initialize the stack
void initStack(struct Stack* s) {
    s->top = -1; // Initialize top to -1, indicating an empty stack
}

// Check if the stack is full
int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

// Check if the stack is empty
int isEmpty(struct Stack* s) {
    return s->top == -1;
}

// Push an element onto the stack
void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack is full! Unable to push %d\n", value);
    } else {
        s->items[++(s->top)] = value;
        printf("%d pushed to stack\n", value);
    }
}

// Pop an element from the stack
int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Unable to pop\n");
        return -1;
    } else {
        return s->items[(s->top)--];
    }
}

// Peek the top element of the stack without popping it
int peek(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty! Nothing to peek\n");
        return -1;
    } else {
        return s->items[s->top];
    }
}

int main() {
    struct Stack s;

    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    push(&s, 40);
    push(&s, 50);
    push(&s, 60); // This will show the stack is full

    printf("Top element is %d\n", peek(&s));

    printf("Popped element is %d\n", pop(&s));
    printf("Popped element is %d\n", pop(&s));

    return 0;
}
