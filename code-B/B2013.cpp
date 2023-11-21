#include <stdio.h>

int main(int argc, char *argv[]) {
	double f;
	scanf("%lf",&f);

	double c = 5.0 / 9 * (f - 32);
	printf("%.5lf",c);

	return 0;
}
