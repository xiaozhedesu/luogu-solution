#include <stdio.h>

void scanArray(int array[], int length) {
	for(int i = 0; i < length; i++) {
		scanf("%d",array + i);
	}
}

int main() {
	int length;
	scanf("%d",&length);
	int nums[length];
	scanArray(nums,length);

	int count = 0;
	for(int index = 0; index < length; index++) {
		int num[4];
		num[3] = nums[index] % 10;
		num[2] = nums[index] / 10 % 10;
		num[1] = nums[index] / 100 % 10;
		num[0] = nums[index] / 1000;
		if(num[3] - num[2] - num[1] - num[0] > 0) {
			count++;
		}
	}

	printf("%d",count);

	return 0;
}
