#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

typedef struct {
    int size;
    int arr[MAX_HEAP_SIZE];
} MinHeap;

// Function prototypes
void insert(MinHeap *heap, int element);
void heapifyUp(MinHeap *heap, int index);
void heapifyDown(MinHeap *heap, int index);
int extractMin(MinHeap *heap);
void printHeap(const MinHeap *heap);

// Insert an element into the heap
void insert(MinHeap *heap, int element) {
    if (heap->size >= MAX_HEAP_SIZE) {
        printf("Heap overflow\n");
        return;
    }
    
    heap->arr[heap->size] = element;
    heapifyUp(heap, heap->size);
    heap->size++;
}

// Heapify up to maintain the min-heap property (iterative)
void heapifyUp(MinHeap *heap, int index) {
    while (index > 0) {
        int parentIndex = (index - 1) / 2;
        
        if (heap->arr[index] >= heap->arr[parentIndex]) {
            break;
        }
        
        // Inline swap
        int temp = heap->arr[index];
        heap->arr[index] = heap->arr[parentIndex];
        heap->arr[parentIndex] = temp;

        index = parentIndex;
    }
}

// Heapify down to maintain the min-heap property (iterative)
void heapifyDown(MinHeap *heap, int index) {
    int leftChild, rightChild, smallest;

    while (1) {
        leftChild = 2 * index + 1;
        rightChild = 2 * index + 2;
        smallest = index;

        if (leftChild < heap->size && heap->arr[leftChild] < heap->arr[smallest]) {
            smallest = leftChild;
        }

        if (rightChild < heap->size && heap->arr[rightChild] < heap->arr[smallest]) {
            smallest = rightChild;
        }

        if (smallest == index) {
            break;
        }

        // Inline swap
        int temp = heap->arr[index];
        heap->arr[index] = heap->arr[smallest];
        heap->arr[smallest] = temp;

        index = smallest;
    }
}

// Extract the minimum element from the heap
int extractMin(MinHeap *heap) {
    if (heap->size == 0) {
        printf("Heap underflow\n");
        return -1;
    }

    int min = heap->arr[0];
    heap->arr[0] = heap->arr[heap->size - 1];
    heap->size--;
    heapifyDown(heap, 0);

    return min;
}

// Print the heap
void printHeap(const MinHeap *heap) {
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }
    printf("\n");
}

int main() {
    MinHeap heap = {0};  // Initialize heap with size = 0

    insert(&heap, 3);
    insert(&heap, 1);
    insert(&heap, 15);
    insert(&heap, 5);
    insert(&heap, 4);
    insert(&heap, 45);

    printf("Min-Heap array: ");
    printHeap(&heap);

    printf("Extracted min: %d\n", extractMin(&heap));
    printf("Min-Heap after extraction: ");
    printHeap(&heap);

    return 0;
}
