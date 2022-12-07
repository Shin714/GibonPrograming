#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	int a[10];
	int flag[10]= { 0 };
	int count;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < 10; i++) {
		count = 0;

		if (flag[i] == 0) {
			printf("%d ", a[i]);
			for (int j = i; j < 10; j++) {
				if (a[i] == a[j]) {
					flag[j] = 1;
					count++;
				}
			}
			printf("%d\n", count);
		}
		
	}
	
	
	return 0;
}
