#include <stdio.h>


int recursiveMaximum(const int array[], int size);

int main() {
	int numbers[] = { 12, 5, 8, 19, 3, 17, 10 };
	int size = sizeof(numbers) / sizeof(numbers[0]);

	
	int max = recursiveMaximum(numbers, size);

	
	printf("The maximum value in the array is: %d\n", max);

	return 0;
}


int recursiveMaximum(const int array[], int size) {
	
	if (size == 1) {
		return array[0];
	}

	
	int rightMax = recursiveMaximum(array + 1, size - 1);

	return (array[0] > rightMax) ? array[0] : rightMax;
}