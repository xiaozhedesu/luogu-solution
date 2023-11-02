#include <stdio.h>
#include <math.h>

double calcBMI(double m, double h) {
	return m / pow(h, 2);
}

int main() {
	double m, h;
	scanf("%lf %lf", &m, &h);

	double BMI = calcBMI(m, h);
	if (BMI < 18.5) {
		printf("Underweight");
	} else if (BMI < 24) {
		printf("Normal");
	} else {
		printf("%g\n", BMI);
		printf("Overweight");
	}

	return 0;
}
