#include <stdio.h>

int howMuchThree(long long num) {
	int result = 0;
	while(num != 0) {
		if(num % 10 == 3) {
			result++;
		}
		num /= 10;
	}
	return result;
}

int main() {
	long long num;
	int k;
	scanf("%lld %d",&num,&k);

	if(k == howMuchThree(num)) {
		printf("YES");
	} else {
		printf("NO");
	}
	return 0;
}
