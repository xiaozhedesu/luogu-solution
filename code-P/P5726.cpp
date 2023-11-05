#include <stdio.h>

void scanArray(int array[], int length);

void bubbleSort(int array[],int length);

double averageScore(int nums[],int length);

int main() {
	int n;
	scanf("%d",&n);
	int nums[n];
	scanArray(nums,n);
	
	bubbleSort(nums,n);
	double result = averageScore(nums,n);
	printf("%.2f",result);

	return 0;
}

void scanArray(int array[], int length) {
	for (int index = 0; index < length; index++) {
		scanf("%d", &array[index]);
	}
}

void bubbleSort(int array[],int length) {
	for(int outer = 0; outer < length; outer++) {
		for(int inner = 0; inner < length - 1 - outer; inner++) {
			if(array[inner] < array[inner + 1]) {
				int temp = array[inner];
				array[inner] = array[inner + 1];
				array[inner + 1] = temp;
			}
		}
	}
}

double averageScore(int nums[],int length){
	int sum = 0;
	//Ëã·ÖÈ¥Ê×Î²
	for(int index = 1;index < length - 1;index++){
		sum += nums[index];
	}
	
	return (double)sum / (length - 2);
}