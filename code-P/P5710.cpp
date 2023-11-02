#include <stdio.h>

int isSuki(int number, int people) {
	int boo1 = number % 2 == 0;
	int boo2 = number > 4 && number <= 12;
	if (people == 1) {
		//两个条件同时成立
		return boo1 && boo2;
	} else if (people == 2) {
		//两个条件至少有一个成立
		return !(!boo1 && !boo2);
	} else if (people == 3) {
		//两个条件只能有一个成立（异或）
		return (boo1 + boo2 == 1) ? 1 : 0;
	} else if (people == 4) {
		//两个条件都不成立
		return !boo1 && !boo2;
	}
}

int main() {
	int number;
	scanf("%d", &number);

	for (int i = 1; i <= 4; i++) {
		printf("%d ", isSuki(number, i));
	}

	return 0;
}
