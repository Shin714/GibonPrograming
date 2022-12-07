#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char arr[3];
    char input;
    char a_t[6]={' ','_',' ','_',' ','_'};
    int ans = 0;
    int cnt=0;
    for (int i = 0; i < 3; i++) {
        scanf("%c", &arr[i]);
    }
    while (cnt != 5 && ans != 3) {
        getchar();
        scanf("%c", &input);
        
        for (int i = 0; i < 3; i++) {
            if (arr[i] == input) {
                a_t[i *2 + 1] = arr[i];
                ans++;
            }
        }
        for (int j = 0; j < 6; j++) {
            printf("%c", a_t[j]);
        }
        cnt++;
    }



    return 0;
}
