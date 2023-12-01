#include <stdio.h>

void jiaoGu(int number) {
	if(number <= 0) {
		return ;
	}

	while(number != 1) {
		int result;
		if(number % 2 == 1) {
			result = number * 3 + 1;
			printf("%d*3+1=%d\n",number,result);
		} else {
			result = number / 2;
			printf("%d/2=%d\n",number,result);
		}
		number = result;
	}
	printf("End\n");
}

int main() {
	int number;
	scanf("%d",&number);

	jiaoGu(number);

	return 0;
}