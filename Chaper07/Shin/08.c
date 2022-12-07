#pragma warning(disable:4996)
#include <stdio.h>
#define SIZE	5

int main() {
	int a[SIZE];
	int temp;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < SIZE - 1; i++) {
		if (a[i] > a[i + 1]) {
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%d\n", a[i]);
	}
	
	
	return 0;
}
