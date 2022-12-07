#pragma warning(disable:4996)
#include <stdio.h>

int func2(int x, int a, int b, int c);

int main() {
	int x;
	int a, b, c;
	int d, e, f;
	
	scanf("%d", &x);
	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &d, &e, &f);
	
		
	printf("%d", func2(func2(x, a, b, c), d, e, f));
	return 0;
}

int func2(int x, int a, int b, int c) {
	return a * x * x + b * x + c;
}
