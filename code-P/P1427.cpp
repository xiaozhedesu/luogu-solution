#include <stdio.h>

void printReverseNum(int nums[], int length);


int main(int argc, char *argv[]) {
	int numLength = -1;
	int nums[100];

	int temp;
	do {
		scanf("%d",&temp);
		numLength++;
		nums[numLength] = temp;
	} while(temp != 0);

	printReverseNum(nums,numLength);

	return 0;
}

void printReverseNum(int nums[], int length) {
	for(int index = length - 1; index >= 0; index--) {
		printf("%d ",nums[index]);
	}
}