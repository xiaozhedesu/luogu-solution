#include <stdio.h>

int main() {
	int x,n;
	scanf("%d %d", &x, &n);

	double result = x;
	for(int i = 0; i < n; i++) {
		result *= (1 + 0.001);
	}

	printf("%.4lf",result);
	return 0;
}
