#include <stdio.h>
#include <math.h>

double calcLength(int point1x,int point1y,int point2x,int point2y) {
	int result = pow(point1x - point2x,2) + pow(point1y - point2y,2);
	return sqrt(result);
}

int isTraingle(double a,double b,double c) {
	int result = a + b > c && b + c > a && a + c > b;
	return result;
}

double calcTraingleArea(double a,double b,double c) {
	if(isTraingle(a,b,c)) {
		double p = (a + b + c) / 2;
		double area = sqrt(p * (p - a) * (p - b) * (p - c));
		return area;
	} else {
		return 0;
	}
}

int main(int argc, char *argv[]) {
	int x1,x2,y1,y2,x3,y3;
	scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

	double a = calcLength(x1,y1,x2,y2);
	double b = calcLength(x1,y1,x3,y3);
	double c = calcLength(x2,y2,x3,y3);

	double result = calcTraingleArea(a,b,c);
	printf("%.2f",result);

	return 0;
}
