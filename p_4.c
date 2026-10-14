#include <stdio.h>

int main()
{
    int a[50], n, i, min, sum = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    min = a[0];

    for(i = 1; i < n; i++)
        if(a[i] < min)
            min = a[i];

    for(i = 0; i < n; i++)
        sum = sum + (a[i] - min);

    printf("Minimum number of increments: %d", sum);

    return 0;
}