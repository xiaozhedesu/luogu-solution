#include <stdio.h>

double sum(int n) {
	double result = 0;
	for(int num = 1; num <= n; num++) {
		double temp = 1.0 / num;
		if(num % 2 == 0) {
			result -= temp;
		} else {
			result += temp;
		}
	}
	return result;
}

int main() {
	int n;
	scanf("%d",&n);

	double result = sum(n);
	printf("%.4lf",result);

	return 0;
}
