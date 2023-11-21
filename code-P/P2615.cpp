#include <stdio.h>

int matrix[39][39] = {0};

void initMagicSquare(int n);

void printMagicSquare(int n);

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);

	initMagicSquare(n);

	printMagicSquare(n);

	return 0;
}

void initMagicSquare(int n) {
	//下一次循环时此处存放上一次循环保存数的位置，方便
	int rows = 0;
	int cols = 0;
	for(int index = 1; index <= n * n; index++) {
		if(index == 1) {
			rows = 0;
			cols = n / 2;
		} else if(rows == 0 && cols != n - 1) {
			rows = n - 1;
			cols++;
		} else if(rows != 0 && cols == n - 1) {
			rows--;
			cols = 0;
		} else if(rows == 0 && cols == n - 1) {
			rows++;
		} else {
			if(matrix[rows - 1][cols + 1] == 0) {
				rows--;
				cols++;
				matrix[rows][cols] = index;
				continue;
			} else {
				rows++;
				matrix[rows][cols] = index;
				continue;
			}
		}

		matrix[rows][cols] = index;
	}
}

void printMagicSquare(int n) {
	for(int outer = 0; outer < n; outer++) {
		for(int inner = 0; inner < n; inner++) {
			printf("%d ",matrix[outer][inner]);
		}
		putchar('\n');
	}
}