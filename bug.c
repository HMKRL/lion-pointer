#include <stdio.h>

int main(int argc, char *argv[])
{
	int i, j, k = 10;
	int a[100] = {0};
	for (i = 0; i < k; i++) {
		for (j = 0; i < k; j++) {
			printf("%d\n", a[j]);
		}
	}
	return 0;
}
