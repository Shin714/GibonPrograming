#pragma warning(disable:4996)
#include <stdio.h>

int main() {
	char str[10];
	int count = 0;

	scanf("%s", str);

	for (int i = 0; i < 5; i++) {
		if (str[i] == 'c' && str[i + 1] == 'a' && str[i + 2] == 't') count++;
	}

	printf("%d", count);

	return 0;

}
