#include <stdio.h>

int main()
{
    int a[50], n, i, j, temp;
    float median;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    // Sort the array
    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    // Find median
    if(n % 2 == 0)
        median = (a[n/2 - 1] + a[n/2]) / 2.0;
    else
        median = a[n/2];

    printf("Median of the given array: %.1f", median);

    return 0;
}