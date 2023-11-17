#include <stdio.h>

long long factorial(int num);

long long arrangement(int up,int down);

long long conbination(int up,int down);

void printYangHuiTraingle(int line);

int main(int argc, char *argv[]) {
	int line;
	scanf("%d",&line);

	printYangHuiTraingle(line);

	return 0;
}

void printYangHuiTraingle(int line) {
	for(int outer = 0; outer < line; outer++) {
		for(int inner = 0; inner <= outer; inner++) {
			printf("%ld ", conbination(inner,outer));
		}
		putchar('\n');
	}
}

long long factorial(int num) {
	long long result = 1;

	for(int index = 2; index <= num; index++) {
		result *= index;
	}

	return result;
}

long long arrangement(int up,int down) {
	long long result = factorial(down) / factorial(down - up);
	return result;
}

long long conbination(int up,int down) {
	long long result = factorial(down) / factorial(down - up) / factorial(up);
	return result;
}
