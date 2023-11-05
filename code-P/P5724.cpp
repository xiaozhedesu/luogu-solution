#include <stdio.h>

int maxDif(int nums[],int length);

void scanArray(int array[], int length);

int main(){
	int n;
	scanf("%d",&n);
	int nums[n];
	scanArray(nums,n);
	
	int result = maxDif(nums,n);
	printf("%d",result);

	return 0; 
}

int maxDif(int nums[],int length){
	int max = nums[0],min = nums[0];
	for(int index = 1;index < length;index++){
		if(nums[index] > max){
			max = nums[index];
		}else if(nums[index] < min){
			min = nums[index];
		}
	}
	
	return max - min;
}

void scanArray(int array[], int length) {
	for (int index = 0; index < length; index++) {
		scanf("%d", &array[index]);
	}
}