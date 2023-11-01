#include <stdio.h>

int main() {
	int basicApple, peopleNumber;
	scanf("%d %d", &basicApple, &peopleNumber);

	int finalApple = basicApple * peopleNumber;
	printf("%d", finalApple);

	return 0;
}
