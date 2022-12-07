#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char arr[6];
    char temp;
    for (int i = 0; i < 5; i++) {
        scanf("%c",&arr[i]);
    }
    arr[5] = '\0';
    for(int j=0;j<5;j++){
        for (int j = 0; j < 5; j++) {
            printf("%c", arr[j]);
        }
        printf("\n");
        arr[5] = arr[4];
        arr[4] = arr[3];
        arr[3] = arr[2];
        arr[2] = arr[1];
        arr[1] = arr[0];
        arr[0] = arr[5];
        
        
    }

 
    return 0;
}
