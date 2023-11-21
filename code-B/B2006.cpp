#include <stdio.h>

int main(int argc, char *argv[]) {
	int x,a,y,b;
	scanf("%d %d %d %d",&x,&a,&y,&b);

	//	x * a = c + a * m;
	//	y * b = c + b * m;
	double m = (double)(y * b - x * a) / (b - a);
	printf("%.2lf",m);
	return 0;
}
