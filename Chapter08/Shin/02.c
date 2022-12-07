#pragma warning(disable:4996)
#include <stdio.h>

int sum(int n);

int main() {
	int A, B;

	scanf("%d %d", &A, &B);

	printf("%d", sum(B) - sum(A) + A);
	
	return 0;
}

int sum(int n) {
	return n * (n + 1) / 2;
}
