#include <stdio.h>

int minNumber(int nums[],int length){
	int min = nums[0];
	for(int index = 1;index < length;index++){
		if(nums[index] < min){
			min = nums[index];
		}
	}
	return min;
}

int main(){
	int length;
	scanf("%d",&length);
	int nums[length];
	for(int i = 0;i <length;i++){
		scanf("%d",nums+i);
	}
	
	int result = minNumber(nums,length);
	printf("%d",result);

	return 0;
}
