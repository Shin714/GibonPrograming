#pragma warning(disable:4996)
#include <stdio.h>
#define TRUE	1


int max1, max2;

void update_max(int x);

int main() {

	int a, b;
	int x;

	scanf("%d %d", &a, &b);

	max1 = a > b ? a : b;
	max2 = a < b ? a : b;

	

	while (TRUE) {
		scanf("%d", &x);
		if (x == 0) break;
		update_max(x);
	}

	printf("%d %d", max1, max2);

	return 0;
}

void update_max(int x) {

	if (x > max1) {
		max2 = max1;
		max1 = x;
	}
	else if (x > max2) {
		max2 = x;
	}
	else;

	return;
}
