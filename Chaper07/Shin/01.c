#pragma warning(disable:4996)
#include <stdio.h>


int main() {

	int array[5];
	int sum = 0;

	scanf("%d %d %d %d %d", &array[0], &array[1], &array[2], &array[3], &array[4]);
	for (int i = 0; i < 5; i++) {
		sum += array[i];
	}

	for (int i = 0; i < 5; i++) {
		if (array[i] >= sum / 5.0) printf("%d ", array[i]);
	}

}
