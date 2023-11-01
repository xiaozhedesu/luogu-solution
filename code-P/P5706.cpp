#include <stdio.h>

int main() {
	double t;
	int n;
	scanf("%lf %d", &t, &n);

	int cupNum = 2 * n;
	double drink = t / n;

	printf("%.3lf\n%d", drink, cupNum);

	return 0;
}
