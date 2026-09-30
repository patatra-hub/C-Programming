
#include <stdio.h>

int main(void)
{
	int n;

	printf("Enter the number of elements: ");
	if (scanf("%d", &n) != 1 || n <= 0) {
		printf("Invalid array size.\n");
		return 1;
	}

	int array[n];
	printf("Enter %d elements: ", n);
	for (int i = 0; i < n; i++) {
		if (scanf("%d", &array[i]) != 1) {
			printf("Invalid input.\n");
			return 1;
		}
	}

	printf("All possible subarrays:\n");
	for (int start = 0; start < n; start++) {
		for (int end = start; end < n; end++) {
			for (int i = start; i <= end; i++) {
				printf("%d ", array[i]);
			}
			printf("\n");
		}
	}

	return 0;
}
