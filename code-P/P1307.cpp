#include <stdio.h>
#include <math.h>

void swap(char *a,char *b) {
	char temp = *a;
	*a = *b;
	*b = temp;
}

int reverseNumber(int num) {
	int isMinus = 0;
	if(num < 0) {
		isMinus = 1;
		num = -num;
	}

	int digit = 0;
	int temp = num;
	while (temp != 0) {
		digit++;
		temp /= 10;
	}
	char numString[digit + 2];
	sprintf(numString,"%d",num);

	int nums[digit];
	for(int i = 0; i < digit/2; i++) {
		swap(&numString[i],&numString[digit - 1 - i]);
	}
	for(int i = 0; i < digit; i++) {
		nums[i] = numString[i] - '0';
	}

	int reverseNum = nums[digit - 1];
	for(int i = 1; i < digit; i++) {
		reverseNum +=nums[digit - 1 - i] * pow(10,i);
	}
	if(isMinus) {
		reverseNum = -reverseNum;
	}
	return reverseNum;
}

int main() {
	int num;
	scanf("%d",&num);

	int reverseNum = reverseNumber(num);
	printf("%d",reverseNum);

	return 0;
}
