#include <stdio.h>

int swin(double distance);

int main(){
	double distance;
	scanf("%lf",&distance);
	
	int result = swin(distance);
	printf("%d",result);

	return 0;
}

int swin(double distance){
	double oneDistance = 2.0;
	int step = 0;
	double sumDistance = 0;
	while(sumDistance < distance){
		sumDistance += oneDistance;
		oneDistance *=0.98;
		step++;
	}
	return step;
}