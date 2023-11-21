#include <stdio.h>
#define PI 3.14159

int main(int argc, char *argv[]) {
	double r;
	scanf("%lf",&r);
	double d = 2 * r;
	double c = PI * d;
	double s = PI * r * r;

	printf("%.4lf %.4lf %.4lf", d, c, s);

	return 0;
}
