#include <stdio.h>

//ͨ��������������ת����
double reverseNumber(double number) {
	double decimal = number - (int)number;
	double nowInt = 10 * decimal;

	int a = (int)number % 10;
	int b = (int)number / 10 % 10;
	int c = (int)number / 100;
	double nowDecimal = 0.1 * a + 0.01 * b + 0.001 * c;

	return nowInt + nowDecimal;
}

int main() {
	double num;
	scanf("%lf", &num);

	double reverseNum = reverseNumber(num);
	printf("%.3lf", reverseNum);

	return 0;
}
