#include <stdio.h>
#include <math.h>

double calcTriangleSquare(double a, double b, double c);

int main() {
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);

	double area = calcTriangleSquare(a, b, c);
	printf("%.1lf", area);

	return 0;
}

double calcTriangleSquare(double a, double b, double c) {
	double p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}