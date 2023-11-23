#include <stdio.h>

int main(int argc, char *argv[]) {
	double num;
	scanf("%lf",&num);

	printf("%lf\n%.5lf\n%e\n%g", num, num, num, num);

	return 0;
}
