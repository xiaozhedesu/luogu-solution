#include <stdio.h>

int unhappy(int array[], int length);

int main() {
	int nums[14];
	for(int i = 0; i < 14; i++) {
		scanf("%d",&nums[i]);
	}

	int result = unhappy(nums,14);
	printf("%d",result);

	return 0;
}

int unhappy(int array[], int length) {
	int max = 0,maxIndex = -1;
	for(int index = 0; index < length/2;index++) {
		int sumTime = array[index*2] + array[index*2+1];
		if(max < sumTime){
			max = sumTime;
			maxIndex = index;
		}
	}
	if(max<=8){
		return 0;
	}else{
		return maxIndex + 1;
	}
}
