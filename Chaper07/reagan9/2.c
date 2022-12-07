#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char arr[7];
	int cnt = 0;
	for (int i = 0; i < 7; i++) {
		scanf("%c", &arr[i]);
		
	}
	
	for (int i = 0; i < 7; i++) {
		if (arr[i] == 'c'  && arr[i+1]=='a' && arr[i + 2] == 't') {
			cnt++;
			i += 2;
		}
	}
	printf("%d ", cnt);
	
	return 0;
}
