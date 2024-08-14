#include <stdio.h>

int main () {

    int arr[8] = {3, 7, 2, 8, 5, 1, 4, 6};

    int n = 8;

    bubblesort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

void bubblesort (int arr[], int n) {
    int i;
    int j;
    int temp;

    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-1-1; j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j+1] = temp;
            }
        }
    };
}