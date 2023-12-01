#include <stdio.h>
#include <math.h>

int main() {
	double x;
	int n;
	scanf("%lf %d",&x,&n);

	double result = 0;
	for(int i = n; i >= 0; i--) {
		result += pow(x,i);
	}

	printf("%.2lf",result);

	return 0;
}
