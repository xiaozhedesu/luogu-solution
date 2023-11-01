#include <stdio.h>

void printDiamond() {
	int line = 2;
	for (int outer = 1; outer <= 3; outer++) {
		//�ո�
		for (int inner = 0; inner <= line - outer; inner++) {
			putchar(' ');
		}
		//�Ǻ�
		for (int inner = 1; inner <= outer * 2 - 1; inner++) {
			putchar('*');
		}
		putchar('\n');
	}

	for (int outer = 2; outer  >= 1; outer--) {
		//�ո�
		for (int inner = 0; inner <= line - outer; inner++) {
			putchar(' ');
		}
		//�Ǻ�
		for (int inner = 1; inner <= outer * 2 - 1; inner++) {
			putchar('*');
		}
		if (outer != 1) {
			putchar('\n');
		}
	}
}

int main() {

	printDiamond();

	return 0;
}
