#include <stdio.h>

void moveZeroes(int arr[], int n) 
{
    int j = 0;
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroes(arr, n);

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}   