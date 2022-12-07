#pragma warning(disable:4996)
#include <stdio.h>
#define TRUE	1
#define FALSE	0

void print_triangle(int n);

int main() {
	int N;
	
	while (TRUE) {
		scanf("%d", &N);
		if (N <= 0) break;
		print_triangle(N);
	}

	return 0;
}

void print_triangle(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}
