#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	const int numThrows = 36000;
	int results[11] = { 0 }; 

	srand((unsigned int)time(NULL));

	for (int i = 0; i < numThrows; i++) {
		int die1 = rand() % 6 + 1;
		int die2 = rand() % 6 + 1;
		int sum = die1 + die2;
		results[sum - 2]++;
	}

	
	printf("%-10s%-10s%-15s\n", "點數", "次數", "比例");
	for (int i = 0; i < 11; i++) {
		printf("%-10d%-10d%-15.2f%%\n", i + 2, results[i], (double)results[i] / numThrows * 100);
	}

	return 0;
}