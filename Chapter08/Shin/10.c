#pragma warning(disable:4996)
#include <stdio.h>
#define TRUE	1


int N;

void die1(int x);
void die2(int x, int y);
void die3(int x, int y, int z);


int main() {

	scanf("%d", &N);

	for (int x = 1; x <= 6; x++) {
		die1(x);
	}



	return 0;
}

void die1(int x) {

	for (int y = 1; y <= 6; y++) {
		die2(x, y);
	}

	return;
}

void die2(int x, int y) {

	for (int z = 1; z <= 6; z++) {
		die3(x, y, z);
	}

	return;
}
void die3(int x, int y, int z) {

	if (x + y + z == N) printf("%d %d %d\n", x, y, z);

	return;
}
