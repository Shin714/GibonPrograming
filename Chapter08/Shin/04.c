#pragma warning(disable:4996)
#include <stdio.h>

void print_row1(int n);
void print_row2(int n);

int main() {
	int N;
	int ans = 0;

	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		if ((i + 1) % N <= 1) print_row1(N);
		else print_row2(N);
	}

	return 0;
}

void print_row1(int n) {
	for (int i = 0; i < n; i++) {
		printf("%d", n);
	}
	printf("\n");
	return;
}
void print_row2(int n) {
	for (int i = 0; i < n; i++) {
		if ((i + 1) % n <= 1) printf("%d", n);
		else printf(" ");
	}
	printf("\n");
	return;
}
