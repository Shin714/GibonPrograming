#pragma warning(disable:4996)
#include <stdio.h>

int main() {

	
	int a[5];
	int max, second;
	int th = 0;

	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

	max = a[0];

	for (int i = 0; i < 5; i++) {

		if (a[i] > max) {
			max = a[i];
			th = i;
		}

	}

	second = a[(th + 1) % 5];

	for (int i = 0; i < 5; i++) {

		if (i - th && a[i] > second) {
			second = a[i];
		}
		
	}
	printf("%d\n%d", max, second);

	return 0;
}
