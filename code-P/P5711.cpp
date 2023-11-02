#include <stdio.h>

int isLeapYear(int year) {
	//能被4整除，但不能被100整除;
	int boo1 = year % 4 == 0 && year % 100 != 0;
	//能被400整除
	int boo2 = year % 400 == 0;

	return boo1 || boo2;
}

int main() {
	int n;
	scanf("%d", &n);

	printf("%d", isLeapYear(n));

	return 0;
}
