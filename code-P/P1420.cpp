#include <stdio.h>

void scanArray(int array[], int length);

//终于还是忍不住用拼音函数名了吗）
int maxLianhao(int nums[],int length);

int main() {
	int n;
	scanf("%d",&n);
	int nums[n];
	scanArray(nums,n);

	int result = maxLianhao(nums,n);
	printf("%d",result);

	return 0;
}

void scanArray(int array[], int length) {
	for (int index = 0; index < length; index++) {
		scanf("%d", &array[index]);
	}
}

int maxLianhao(int nums[],int length) {
	int maxCount = 1;
	int count = 1;
	for(int index = 1; index < length; index++) {
		if(nums[index-1] + 1 == nums[index]) {
			count++;
		} else {
			if(count > maxCount) {
				maxCount = count;
			}
			count = 1;
		}
	}
	if(count > maxCount) {
		maxCount = count;
	}
	return maxCount;
}
