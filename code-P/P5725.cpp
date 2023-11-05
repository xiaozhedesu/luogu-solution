#include <stdio.h>

void printNumberRectangle(int n);

void printNumberTraingle(int n);

int main() {
	int n;
	scanf("%d",&n);

	printNumberRectangle(n);
	putchar('\n');
	printNumberTraingle(n);

	return 0;
}

void printNumberRectangle(int n) {
	int count = 1;
	for(int outer = 0; outer < n; outer++) {
		for(int inner = 0; inner < n; inner++) {
			printf("%02d",count++);
		}
		putchar('\n');
	}
}

void printNumberTraingle(int n) {
	int count = 1;
	for(int outer = 1; outer <= n; outer++) {
		for(int inner = 0; inner < n - outer; inner++) {
			printf("  ");
		}
		for(int inner = 0; inner < outer; inner++) {
			printf("%02d",count++);
		}
		putchar('\n');
	}
}