#include <stdio.h>

int isTraingle(int a, int b, int c) {
	return a + b > c && a + c > b && b + c > a;
}

int main(int argc, char *argv[]) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	printf("%d",isTraingle(a,b,c));

	return 0;
}
