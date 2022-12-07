#pragma warning(disable:4996)
#include <stdio.h>
#define SIZE	5

int main() {
	char alphabet[10];
	scanf("%s", alphabet);
	for (int i = 0; i < SIZE; i++) {
		for (int j = SIZE - i, itr = 0; itr < SIZE; j++, itr++) {
			printf("%c", alphabet[j % SIZE]);
		}
		printf("\n");
	}
}
