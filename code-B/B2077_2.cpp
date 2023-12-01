#include <stdio.h>

void jiaoGu(int number) {
	//µÝ¹é»á³¬Ê±
	if(number <= 0) {
		return ;
	} else if(number == 1) {
		printf("End\n");
		return ;
	} else if(number % 2 == 1) {
		int result = number * 3 + 1;
		printf("%d*3+1=%d\n",number,result);
		jiaoGu(result);
	} else {
		int result = number / 2;
		printf("%d/2=%d\n",number,result);
		jiaoGu(result);
	}
}

int main() {
	int number;
	scanf("%d",&number);

	jiaoGu(number);

	return 0;
}
