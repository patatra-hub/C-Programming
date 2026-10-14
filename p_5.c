#include <stdio.h>
#include <limits.h>

int getMinimumCost(int arr[], int n) {
    if (n <= 1) return 0;

    int min_val = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    return min_val * (n - 1);
}

int main() {
    int arr[] = {4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Minimum cost: %d\n", getMinimumCost(arr, n));

    return 0;
}   