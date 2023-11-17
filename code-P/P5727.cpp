#include <stdio.h>

void printReverseNumber(int nums[],int length);

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	int changeProcess[200];
	int length = 0;

	while(n != 1) {
		changeProcess[length++] = n;
		if(n % 2 == 1) {
			n = n * 3 + 1;
		} else {
			n /= 2;
		}
	}
	changeProcess[length++] = 1;

	printReverseNumber(changeProcess,length);

	return 0;
}

void printReverseNumber(int nums[],int length) {
	for(int index = length - 1; index >= 0; index--) {
		printf("%d ",nums[index]);
	}
}