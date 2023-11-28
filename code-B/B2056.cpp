#include <stdio.h>

void scanArray(int array[],int length) {
	for(int index = 0; index < length; index++) {
		scanf("%d",array + index);
	}
}


int sum(int array[],int length) {
	int sum = 0;
	for(int *numP = array; numP < array + length; numP++) {
		sum += *numP;
	}
	return sum;
}

double average(int array[],int length) {
	return (double)sum(array, length) / length;
}

int main() {
	int length;
	scanf("%d",&length);
	int nums[length];
	scanArray(nums,length);

	printf("%d %.5lf", sum(nums,length), average(nums,length));

	return 0;
}
