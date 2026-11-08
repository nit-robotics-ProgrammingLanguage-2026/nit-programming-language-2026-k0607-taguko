#include <stdio.h>

int main(void)
{
	int n;
	if (scanf("%d", &n) != 1) {
		return 0;
	}

	if (n < 0) {
		printf("NG\n");
		return 0;
	}

	int count = 0;
	for (int i = 0; i <= 50; i++) {
		for (int j = 0; j <= 50; j++) {
			if (i != j && i + j == n) {
				count++;
			}
		}
	}

	printf("%d\n", count);
	return 0;
}
