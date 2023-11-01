#include <stdio.h>

int add(int num1, int num2) {
	return num1 + num2;
}

int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	printf("%d", add(num1, num2));

	return 0;
}
