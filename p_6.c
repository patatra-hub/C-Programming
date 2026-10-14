#include <stdio.h>

int main()
{
    int a[50], n, k, i, j, found = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the value of k: ");
    scanf("%d", &k);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n && j <= i + k; j++)
        {
            if(a[i] == a[j])
            {
                found = 1;
                break;
            }
        }
        if(found)
            break;
    }

    if(found)
        printf("Array contains duplicate elements within distance %d.", k);
    else
        printf("Array does not contain duplicate elements within distance %d.", k);

    return 0;
}