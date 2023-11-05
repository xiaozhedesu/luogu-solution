#include <stdio.h>

void swap(int *a,int *b);

void printNumbers(int *nums,char *letters);

int main() {
	int nums[3];
	for(int index = 0; index < 3; index++) {
		scanf("%d",nums + index);
	}
	getchar();
	//字符数组一定要给'\0'预留空间，不然会导致'\0'存在不敢存的位置
	//比如letters[3]的情况下'\0'就被存在nums[0]上，导致结果不对了。
	char letters[4];
	scanf("%3s",letters);

	printNumbers(nums,letters);

	return 0;
}

void swap(int *a,int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printNumbers(int *nums,char *letters) {
	int length = 3;

	for(int outer = 0; outer < length; outer++) {
		for(int inner = 0; inner < length-outer-1; inner++) {
			if(nums[inner] > nums[inner+1]) {
				swap(nums+inner, nums+inner+1);
			}
		}
	}


	for(int index = 0; index < length; index++) {
		int numsIndex = letters[index] - 'A';
		printf("%d ",nums[numsIndex]);
	}
}