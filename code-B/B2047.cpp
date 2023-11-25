#include <stdio.h>
#include <math.h>

double f(double x) {
	double y = 0;

	if(x >= 0 && x < 5) {
		y = 2.5 - x;
	} else if(x < 10) {
		y = 2 - 1.5 * pow(x - 3,2);
	} else if(x < 20) {
		y = x / 2 - 1.5;
	}

	return y;
}

int main(int argc, char *argv[]) {
	double x;
	scanf("%lf",&x);

	double y = f(x);
	printf("%.3f",y);

	return 0;
}
