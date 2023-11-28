#include <stdio.h>
#include <math.h>

double calcDelta(double a,double b,double c) {
	return pow(b,2) - 4 * a * c;
}

int main() {
	double a,b,c;
	scanf("%lf %lf %lf", &a, &b, &c);

	double delta = calcDelta(a,b,c);
	if(delta < 0) {
		printf("No answer!");
	} else if(delta == 0) {
		double x = -b / (2 * a);
		printf("x1=x2=%.5lf",x);
	} else {
		double x1 = (-b - sqrt(delta)) / (2 * a);
		double x2 = (-b + sqrt(delta)) / (2 * a);
		if(x1 > x2) {
			double temp = x1;
			x1 = x2;
			x2 = temp;
		}
		printf("x1=%.5lf;x2=%.5lf", x1, x2);
	}

	return 0;
}
