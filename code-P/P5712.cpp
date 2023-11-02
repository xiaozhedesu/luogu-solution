#include <stdio.h>

void eatApple(int number) {
	if (number == 0) {
		printf("Today, I ate 0 apple.");
	} else if (number == 1) {
		printf("Today, I ate 1 apple.");
	} else if (number > 1) {
		printf("Today, I ate %d apples.", number);
	}
}

int main() {
	int x;
	scanf("%d", &x);

	eatApple(x);

	return 0;
}
