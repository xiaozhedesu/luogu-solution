#include <stdio.h>
#include <math.h>

double calcLength(int point1x,int point1y,int point2x,int point2y) {
	int result = pow(point1x - point2x,2) + pow(point1y - point2y,2);
	return sqrt(result);
}

int main(int argc, char *argv[]) {
	int x1,x2,y1,y2;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

	double result = calcLength(x1,y1,x2,y2);
	printf("%.3f",result);

	return 0;
}
