#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int arr[6];
    int temp;
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    arr[5] = 10000;
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 4; i++) {
            if (arr[i] > arr[i + 1]) {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
        }
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d\n", arr[i]);
    }



    return 0;
}
