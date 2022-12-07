#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	int arr[10];
	int cnt;
	
	for (int i = 0; i < 10; i++) {

		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] != 1000) {
			cnt = 1;
			//result[arr[i]] += 1;

			for (int j = i + 1; j < 10; j++) {
				if (arr[i] == arr[j]) {
					cnt++;
					arr[j] = 1000;
				}
			}
			printf("%d %d\n", arr[i], cnt);
		}

	}

	
return 0;
}
