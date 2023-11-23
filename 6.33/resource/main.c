#include <stdio.h>
#pragma warning( disable : 4996 )
#define SIZE 10


int binarySearch(const int array[], int start, int end, int key);

int main() {
	int numbers[SIZE] = { 2, 4, 7, 10, 13, 16, 20, 23, 27, 30 };
	int searchKey, result;

	printf("��J���j�M�����: ");
	scanf("%d", &searchKey);
	result = binarySearch(numbers, 0, SIZE - 1, searchKey);
	if (result != -1) {
		printf("��� %d �b���� %d �Q���C\n", searchKey, result);
	}
	else {
		printf("��� %d ���b�}�C�����C\n", searchKey);
	}

	return 0;
}


int binarySearch(const int array[], int start, int end, int key) {
	if (start <= end) {
		int mid = (start + end) / 2;

		if (array[mid] == key) {
			return mid;
		}
		else if (array[mid] < key) {
			
			return binarySearch(array, mid + 1, end, key);
		}
		else {
			return binarySearch(array, start, mid - 1, key);
		}
	}

	return -1;
}