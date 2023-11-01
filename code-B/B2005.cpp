#include <stdio.h>

void printTriangle(char star) {
	int line = 3;
	for (int outer = 0; outer < line; outer++) {
		//¿Õ¸ñ
		for (int inner = 0; inner < line - outer - 1; inner++) {
			putchar(' ');
		}
		//×Ö·û
		for (int inner = 0; inner < (outer + 1) * 2 - 1; inner++) {
			putchar(star);
		}
		putchar('\n');
	}
}

int main() {
	char star;
	scanf("%c", &star);

	printTriangle(star);


	return 0;
}
