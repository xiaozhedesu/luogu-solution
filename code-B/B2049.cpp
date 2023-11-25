#include <stdio.h>

void bubbleSort(int array[],int length) {
	for(int outer = 0; outer < length - 1; outer++) {
		for(int inner = 0; inner < length - 1 - outer; inner++) {
			if(array[inner] > array[inner + 1]) {
				int temp = array[inner];
				array[inner] = array[inner + 1];
				array[inner + 1] = temp;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int nums[3];
	for(int i = 0; i < 3; i++) {
		scanf("%d",&nums[i]);
	}

	bubbleSort(nums,3);

	printf("%d",nums[2]);

	return 0;
}
