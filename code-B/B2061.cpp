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

	int one = 0, five = 0, ten = 0;
	for(int index = 0; index < length; index++) {
		switch(nums[index]) {
			case 1:
				one++;
				break;
			case 5:
				five++;
				break;
			case 10:
				ten++;
				break;
		}
	}

	printf("%d\n%d\n%d", one, five, ten);
	return 0;
}
