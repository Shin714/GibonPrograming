#pragma warning(disable:4996)
#include <stdio.h>
#define TRIAL	5
#define LENGTH	3

int main() {
	char ans[LENGTH + 5];
	char c[TRIAL];
	int flag[LENGTH] = { 0 };
	int count;

	scanf("%s", ans);
	getchar();


	for (int i = 0; i < TRIAL; i++) {
		count = 0;
		scanf("%c", &c[i]);
		getchar();
		for (int j = 0; j < LENGTH; j++) {
			if (c[i] == ans[j]) {
				flag[j] = 1;
			}
		}
		for (int i = 0; i < LENGTH; i++) {
			if (flag[i]) {
				printf("%c ", ans[i]);
				count++;
			}
			else printf("_ ");
		}
		printf("\n");
		if (count == 3) break;
	}
	

	

	return 0;
}
