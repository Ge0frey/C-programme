#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the beginning
void insertAtBeginning(struct Node** head_ref, int new_data) {
    struct Node* newNode = createNode(new_data);
    newNode->next = *head_ref;
    *head_ref = newNode;
}

// Function to insert a new node at the end
void insertAtEnd(struct Node** head_ref, int new_data) {
    struct Node* newNode = createNode(new_data);
    
    if (*head_ref == NULL) {
        *head_ref = newNode;
        return;
    }

    struct Node* temp = *head_ref;
    while (temp->next != NULL)
        temp = temp->next;
    
    temp->next = newNode;
}

// Function to delete a node with a given key
void deleteNode(struct Node** head_ref, int key) {
    struct Node* temp = *head_ref;
    struct Node* prev = NULL;

    // If the node to be deleted is the head
    if (temp != NULL && temp->data == key) {
        *head_ref = temp->next;
        free(temp);
        return;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // If the key was not found
    if (temp == NULL)
        return;

    prev->next = temp->next;
    free(temp);
}

// Function to display the linked list
void displayList(struct Node* node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

// Main function to test the linked list
int main() {
    struct Node* head = NULL;

    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    printf("Linked list: ");
    displayList(head);

    deleteNode(&head, 2);
    printf("After deleting 2: ");
    displayList(head);

    return 0;
}
