#include <stdio.h>

int main(int argc, char *argv[]) {
	double r1,r2;
	scanf("%lf %lf",&r1,&r2);

	double r = 1 / (1 / r1 + 1 / r2);

	printf("%.2lf",r);

	return 0;
}
