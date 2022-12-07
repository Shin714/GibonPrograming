#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	sum /= 5;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > sum) {
			printf("%d ", arr[i]);
		}
		
	}
	
	return 0;
}
