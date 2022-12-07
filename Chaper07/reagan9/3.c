#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[5];
	int temp;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 4; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("%d %d", arr[0], arr[1]);




    return 0;
}
