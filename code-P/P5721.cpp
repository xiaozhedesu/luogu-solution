#include <stdio.h>

void printNunberTraingle(int n);

int main() {
	int n;
	scanf("%d",&n);

	printNunberTraingle(n);

	return 0;
}

void printNunberTraingle(int n) {
	int num = 1;
	for(int outer = 0; outer < n; outer++) {
		for(int inner = 0; inner < n-outer; inner++) {
			printf("%02d",num++);
		}
		putchar('\n');
	}
}