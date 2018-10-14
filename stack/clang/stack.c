#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
} *Top;

struct Node *CreateNode(int data) {
    struct Node *newNode;
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void Push(struct Node *node) {
    node->next = Top;
    Top = node;
}

struct Node *Pop() {
    struct Node *popped = Top;
    Top = Top->next;
    return popped;
}

void DisplayStack() {
    struct Node *currentNode = Top;
    while(currentNode != NULL) {
        printf("%d -> ", currentNode->data);
        currentNode = currentNode->next;
    }
    printf("base\n");
}

int main() {
    Top = NULL;

	Push(CreateNode(1));
	Push(CreateNode(2));
	Push(CreateNode(3));
	Push(CreateNode(4));

	DisplayStack();

	Pop();
	DisplayStack();
	Pop();
	DisplayStack();

    return 0;
}

// Output:
// 4 -> 3 -> 2 -> 1 -> base
// 3 -> 2 -> 1 -> base
// 2 -> 1 -> base