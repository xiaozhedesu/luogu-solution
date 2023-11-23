#include <stdio.h>

int main(int argc, char *argv[]) {
	double a,b;
	scanf("%lf %lf", &a, &b);

	double result = a;
	while(result - b > 0) {
		result -= b;
	}

	printf("%lg",result);

	return 0;
}
