#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 4  // Initial size of the dynamic array

typedef struct {
    int *data;        // Pointer to hold the array elements
    int size;         // Number of elements currently in the array
    int capacity;     // Current capacity of the array
} DynamicArray;

// Function to initialize the dynamic array
void initArray(DynamicArray *arr) {
    arr->data = (int*)malloc(INITIAL_CAPACITY * sizeof(int)); // Allocate initial memory
    arr->size = 0;                                            // Initially, array is empty
    arr->capacity = INITIAL_CAPACITY;                         // Set initial capacity
}

// Function to resize the dynamic array if needed
void resizeArray(DynamicArray *arr) {
    arr->capacity *= 2; // Double the capacity
    arr->data = (int*)realloc(arr->data, arr->capacity * sizeof(int));
    if (arr->data == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
}

// Function to add an element to the array
void insertElement(DynamicArray *arr, int value) {
    // Resize the array if it's full
    if (arr->size == arr->capacity) {
        resizeArray(arr);
    }
    arr->data[arr->size] = value;  // Add the new element
    arr->size++;                   // Increment the size
}

// Function to free the memory used by the dynamic array
void freeArray(DynamicArray *arr) {
    free(arr->data);
    arr->data = NULL;
    arr->size = 0;
    arr->capacity = 0;
}

// Function to display the elements of the array
void displayArray(DynamicArray *arr) {
    for (int i = 0; i < arr->size; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\n");
}

int main() {
    DynamicArray arr;
    initArray(&arr);  // Initialize the array

    // Insert elements dynamically
    for (int i = 1; i <= 10; i++) {
        insertElement(&arr, i);
    }

    // Display the array
    printf("Array elements: ");
    displayArray(&arr);

    // Free the allocated memory
    freeArray(&arr);
    
    return 0;
}
