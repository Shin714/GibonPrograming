#pragma warning(disable:4996)
#include <stdio.h>

int func1(int n);

int main() {
	int N;
	
	scanf("%d", &N);
		
	printf("%d", func1(N));
	return 0;
}

int func1(int n) {
	return 2 * n * n - 5 * n + 1;
}
