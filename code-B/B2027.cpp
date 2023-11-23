#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(int argc, char *argv[]) {
	int r;
	scanf("%d",&r);

	double v = 4 / 3.0 * pow(r,3) * PI;

	printf("%.5f",v);

	return 0;
}
