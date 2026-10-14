#include <stdio.h>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void rearrangeEvenPositionedGreater(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            if (arr[i] < arr[i - 1]) {
                swap(&arr[i], &arr[i - 1]);
            }
        }
        else {
            if (arr[i] > arr[i - 1]) {
                swap(&arr[i], &arr[i - 1]);
            }
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 3, 2, 2, 5, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    printArray(arr, n);

    rearrangeEvenPositionedGreater(arr, n);

    printf("Rearranged Array: ");
    printArray(arr, n);

    return 0;
}   