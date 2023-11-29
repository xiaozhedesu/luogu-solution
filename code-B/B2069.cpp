#include <stdio.h>

int fibonacci(int num) {
	static int fib[40] = {1,1};
	if(fib[num - 1] == 0) {
		fib[num - 1] = fibonacci(num - 1) + fibonacci(num - 2);
	}
	return fib[num - 1];
}

double sum(int n) {
	double result = 0;
	for(int i = 0; i < n; i++) {
		result += (double)fibonacci(i + 3) / fibonacci(i + 2);
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
