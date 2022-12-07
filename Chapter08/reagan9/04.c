#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void print_row2(int q) {
	printf("%d", q);
	for (int i = 0; i < q - 2; i++) {
		printf(" ");
	}
	printf("%d", q);
}
void print_row1(int n) {
	for (int i = 0; i < n; i++) {
		printf("%d", n);
	}
	for (int i = 0; i < n - 2; i++) {
		printf("\n");
		print_row2(n);
	}
	printf("\n");
	for (int i = 0; i < n; i++) {
		printf("%d", n);
	}
}

int main() {
	int a;
	scanf("%d", &a);
	print_row1(a);

	return 0;
}
