#pragma warning(disable:4996)
#include <stdio.h>
#define SIZE	10
#define NUMBERS	3

int main() {
	int N[SIZE];
	int count[NUMBERS] = {0};

	for (int i = 0; i < SIZE; i++) {
		scanf("%d", &N[i]);
		count[N[i] - 1]++;

	}

	for (int i = 0; i < NUMBERS; i++) {
		printf("%d:", i + 1);
		for (int j = 0; j < count[i]; j++) {
			printf("*");
		}
		printf("\n");
	}

	
	return 0;
}
