#include <stdio.h>

int houMuchCanBuy(int a, int b);

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	int result = houMuchCanBuy(a, b);
	printf("%d", result);

	return 0;
}

int houMuchCanBuy(int a, int b) {
	int money = a * 10 + b;
	int price = 19;

	return money / price;
}