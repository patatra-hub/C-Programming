#include <stdio.h>
#include <math.h>

int main()
{
    int a[50], n, i;
    float sum = 0, mean, sd = 0;

    printf("Enter the array size: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    mean = sum / n;

    for(i = 0; i < n; i++)
        sd = sd + (a[i] - mean) * (a[i] - mean);

    sd = sqrt(sd / n);

    printf("Standard Deviation: %.13f", sd);

    return 0;
}