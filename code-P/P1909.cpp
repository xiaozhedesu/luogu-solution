#include <stdio.h>

int scanArray(int *array,int length);

int findMinNum(int *nums,int length);

int calcMoney(int *pencils,int length,int pencilNum);

int main() {
	int pencilNum;
	scanf("%d",&pencilNum);
	int pencils[6];
	scanArray(pencils,6);

	int money = calcMoney(pencils,6,pencilNum);
	printf("%d",money);

	return 0;
}

int calcMoney(int *pencils,int length,int pencilNum) {
	int prices[3];
	for(int index = 0; index < 3; index++) {
		int package =  pencilNum / pencils[index*2];
		if(pencilNum % pencils[index*2] != 0) {
			//如果还剩一点没买，就多买一包
			package++;
		}
		prices[index] = package * pencils[index * 2 + 1];
	}
	return findMinNum(prices,3);
}

int scanArray(int *array,int length) {
	for(int index = 0; index < length; index++) {
		scanf("%d",array + index);
	}
}

int findMinNum(int *nums,int length) {
	int min = nums[0];
	for(int index = 1; index < length; index++) {
		if(nums[index] < min) {
			min = nums[index];
		}
	}
	return min;
}