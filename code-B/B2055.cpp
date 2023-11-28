#include <stdio.h>

void scanArray(double array[],int length) {
	for(int index = 0; index < length; index++) {
		scanf("%lf",array + index);
	}
}

double average(double nums[],double length) {
	double result = 0;
	for(int index = 0; index < length; index++) {
		result += nums[index];
	}
	result /= length;
	return result;
}

int main() {
	int length;
	scanf("%d",&length);
	double nums[length];
	scanArray(nums,length);

	printf("%.4lf",average(nums,length));

	return 0;
}
