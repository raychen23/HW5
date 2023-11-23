#include <stdio.h>

void stringReverse(char str[]);

int main() {
	char myString[] = "Hello, World!";

	printf("Original String: %s\n", myString);

	
	stringReverse(myString);

	printf("Reversed String: %s\n", myString);

	return 0;
}

void stringReverse(char str[]) {
	
	if (*str != '\0') {
		
		stringReverse(str + 1);
		
		printf("%c", *str);
	}
}