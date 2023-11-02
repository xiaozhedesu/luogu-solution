#include <stdio.h>

void bubbleSort(int *nums, int length);

void printNumber(int *nums, int length);

int main() {
	int nums[3];

	for (int index = 0; index < 3; index++) {
		scanf("%d", &nums[index]);
	}

	bubbleSort(nums, 3);

	printNumber(nums, 3);

	return 0;
}

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int *nums, int length) {
	for (int outer = 0; outer < length; outer++) {
		for (int inner = 0; inner < length - 1 - outer; inner++) {
			if (nums[inner] > nums[inner + 1]) {
				swap(&nums[inner], &nums[inner + 1]);
			}
		}
	}
}

void printNumber(int *nums, int length) {
	for (int index = 0; index < length; index++) {
		printf("%d ", nums[index]);
	}
}