#include <stdio.h>
#include <math.h>

void wrap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int GCD(int num1, int num2) {
	//շת��������������
	if (num1 < num2) {
		wrap(&num1, &num2);
	}

	int dif = num1 % num2;
	if (dif == 0) {
		return num2;
	} else {
		GCD(num2, dif);
	}
}

void sort(int *a, int *b, int *c) {
	//��С��������a , b , c
	if (*a > *b) {
		wrap(a, b);
	}
	if (*b > *c) {
		wrap(b, c);
	}
	if (*a > *b) {
		wrap(a, b);
	}
}

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	sort(&a, &b, &c);

	//Լ��
	if (GCD(a, c) != 1) {
		int num = GCD(a, c);
		a /= num;
		c /= num;
	}

	printf("%d/%d", a, c);

	return 0;
}
