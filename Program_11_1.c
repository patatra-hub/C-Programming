#include <stdio.h>

int main()
{
    int a[50], n, i, j, temp;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Before sorting elements are: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }

    printf("\nAfter sorting elements are: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}