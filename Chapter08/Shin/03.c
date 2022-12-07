#pragma warning(disable:4996)
#include <stdio.h>

int sum(int n);

int main() {
	int N;
	int ans = 0;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		ans += sum(i);
	}
	
	printf("%d", ans);

	return 0;
}

int sum(int n) {
	return n * (n + 1) / 2;
}
