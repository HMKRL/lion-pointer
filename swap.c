#include <stdio.h>

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main(int argc, char *argv[])
{
	int a = 3, b = 9;
	printf("BEFORE:a = %d, b = %d\n", a, b);
	swap(a, b);

	printf("AFTER :a = %d, b = %d\n", a, b);
	return 0;
}
