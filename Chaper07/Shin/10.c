#pragma warning(disable:4996)
#include <stdio.h>
#define COLUMN	3
#define ROW		3

int main() {
	int a[COLUMN][ROW];
	int temp;

	for (int i = 0; i < COLUMN; i++) {
		for (int j = 0; j < ROW; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("%d", a[0][0] + a[1][1] + a[2][2]);
	
	
	
	return 0;
}
