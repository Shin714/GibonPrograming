#pragma warning(disable:4996)
#include <stdio.h>

int add();

int main() {
	int N;
	int ans = 0;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		ans = add(i, ans);
	}

	printf("%d", ans);
	
	return 0;
}

int add(int x, int y) {
	return x + y;
}
