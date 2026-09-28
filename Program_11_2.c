#include <stdio.h>

int main()
{
    int a[50], n, sum, i, j, s;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter the sum: ");
    scanf("%d", &sum);

    for(i = 0; i < n; i++)
    {
        s = 0;

        for(j = i; j < n; j++)
        {
            s = s + a[j];

            if(s == sum)
            {
                printf("Sub array which adds to %d: [", sum);

                for(; i <= j; i++)
                    printf("%d ", a[i]);

                printf("]");
                return 0;
            }
        }
    }

    printf("No sub array found.");

    return 0;
}