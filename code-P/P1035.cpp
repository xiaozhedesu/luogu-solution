#include <stdio.h>

int calcSumIndex(int N);

int main() {
	int k;
	scanf("%d",&k);

	int result = calcSumIndex(k);
	printf("%d",result);

	return 0;
}

int calcSumIndex(int N) {
	int n = 1;
	double sum = 0.0;
	while(sum <= N) {
		sum += 1.0 / n;
		n++;
	}
	return n - 1;
}