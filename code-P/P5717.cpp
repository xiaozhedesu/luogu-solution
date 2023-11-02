#include <stdio.h>

void wrap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void sort(int *a, int *b, int *c) {
	//从小到大排列a , b , c
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
	//判断三角形
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	//从小到大排序，方便比较
	sort(&a, &b, &c);

	//是否能构成三角形
	int isTraingle = a + b > c;
	if (!isTraingle) {
		printf("Not triangle\n");
		return 0;
	}

	//直角、锐角、钝角
	if (a * a + b * b == c * c) {
		printf("Right triangle\n");
	} else if (a * a + b * b > c * c) {
		printf("Acute triangle\n");
	} else {
		printf("Obtuse triangle\n");
	}

	//等腰、等边
	if (a == b || a == c || b == c) {
		printf("Isosceles triangle\n");
	}
	if (a == b && a == c && b == c) {
		printf("Equilateral triangle\n");
	}
	return 0;
}