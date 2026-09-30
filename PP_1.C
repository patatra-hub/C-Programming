#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter the number of elements: ");
	if (scanf("%d", &n) != 1 || n <= 0) {
		return 1;
	}

	int array[n];
	printf("Enter %d elements: ", n);
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &array[i]) != 1) {
			return 1;
		}
	}

	printf("Alternate elements: ");
	for (int i = 0; i < n; i += 2) {
		printf("%d ", array[i]);
	}
	printf("\n");

	return 0;
}
