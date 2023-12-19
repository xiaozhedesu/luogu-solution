#include <stdio.h>
#include <math.h>

int reverseNumber(int num) {
	int result = 0;
	while(num != 0) {
		result *= 10;
		result += num % 10;
		num /= 10;
	}
	return result;
}

int main() {
	int num;
	scanf("%d",&num);

	int reverseNum = reverseNumber(num);
	printf("%d",reverseNum);

	return 0;
}