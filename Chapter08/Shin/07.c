#pragma warning(disable:4996)
#include <stdio.h>

int func2(int x, int a, int b, int c);

int main() {
	int x;
	int a, b, c;
	
	scanf("%d %d %d %d", &x, &a, &b, &c);
		
	printf("%d", func2(x, a, b, c));
	return 0;
}

int func2(int x, int a, int b, int c) {
	return a * x * x + b * x + c;
}
