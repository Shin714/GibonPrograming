#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int arr[10];
    int s[3] = {0};
    

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] == 1) s[0]+=1;
        else if (arr[i] == 2) s[1]+=1;
        
    }
    s[2] = 10 - s[0] - s[1];

    for (int i = 0; i < 3; i++) {
        printf("%d:", i + 1);
        for (int j = 0; j < s[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
