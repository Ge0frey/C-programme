#include <stdio.h>
#include <stdlib.h>

#define MAX_HEAP_SIZE 100

typedef struct {
    int size;
    int arr[MAX_HEAP_SIZE];
} MinHeap;

// Function prototypes
void swap(int *x, int *y);
void insert(MinHeap *heap, int element);
void heapifyUp(MinHeap *heap, int index);
void heapifyDown(MinHeap *heap, int index);
int extractMin(MinHeap *heap);
void printHeap(MinHeap *heap);

// Swap function
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Insert an element into the heap
void insert(MinHeap *heap, int element) {
    if (heap->size == MAX_HEAP_SIZE) {
        printf("Heap overflow\n");
        return;
    }

    heap->arr[heap->size] = element;
    heap->size++;
    heapifyUp(heap, heap->size - 1);
}

// Heapify up to maintain the min-heap property
void heapifyUp(MinHeap *heap, int index) {
    int parentIndex = (index - 1) / 2;

    if (index > 0 && heap->arr[index] < heap->arr[parentIndex]) {
        swap(&heap->arr[index], &heap->arr[parentIndex]);
        heapifyUp(heap, parentIndex);
    }
}

// Heapify down to maintain the min-heap property
void heapifyDown(MinHeap *heap, int index) {
    int leftChild = 2 * index + 1;
    int rightChild = 2 * index + 2;
    int smallest = index;

    if (leftChild < heap->size && heap->arr[leftChild] < heap->arr[smallest]) {
        smallest = leftChild;
    }

    if (rightChild < heap->size && heap->arr[rightChild] < heap->arr[smallest]) {
        smallest = rightChild;
    }

    if (smallest != index) {
        swap(&heap->arr[index], &heap->arr[smallest]);
        heapifyDown(heap, smallest);
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
void printHeap(MinHeap *heap) {
    for (int i = 0; i < heap->size; i++) {
        printf("%d ", heap->arr[i]);
    }
    printf("\n");
}

int main() {
    MinHeap heap;
    heap.size = 0;

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
