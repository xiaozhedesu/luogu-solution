#include <stdio.h>

int main(int argc, char *argv[]) {
	double num;
	scanf("%lf",&num);

	if(num < 0) {
		num = -num;
	}

	printf("%.2f",num);

	return 0;
}
