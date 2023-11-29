#include <stdio.h>

void scanArray(int array[], int length) {
	for(int i = 0; i < length; i++) {
		scanf("%d",array + i);
	}
}

int fibonacci(int num) {
	static int fib[40] = {1,1};
	if(fib[num - 1] == 0) {
		fib[num - 1] = fibonacci(num - 1) + fibonacci(num - 2);
	}
	return fib[num - 1];
}

int main() {
	int length;
	scanf("%d", &length);
	int nums[length];
	scanArray(nums,length);

	for(int *num = nums; num < nums + length; num++) {
		printf("%d\n",fibonacci(*num));
	}

	return 0;
}
