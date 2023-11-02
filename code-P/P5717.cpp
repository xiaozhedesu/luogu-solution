#include <stdio.h>

void wrap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
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
	//�ж�������
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	//��С�������򣬷���Ƚ�
	sort(&a, &b, &c);

	//�Ƿ��ܹ���������
	int isTraingle = a + b > c;
	if (!isTraingle) {
		printf("Not triangle\n");
		return 0;
	}

	//ֱ�ǡ���ǡ��۽�
	if (a * a + b * b == c * c) {
		printf("Right triangle\n");
	} else if (a * a + b * b > c * c) {
		printf("Acute triangle\n");
	} else {
		printf("Obtuse triangle\n");
	}

	//�������ȱ�
	if (a == b || a == c || b == c) {
		printf("Isosceles triangle\n");
	}
	if (a == b && a == c && b == c) {
		printf("Equilateral triangle\n");
	}
	return 0;
}