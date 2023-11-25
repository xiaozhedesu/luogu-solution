#include <stdio.h>

int main(int argc, char *argv[]) {
	int weight, isFast;
	char cha;
	scanf("%d %c",&weight,&cha);

	if(cha == 'n') {
		isFast = 0;
	} else if(cha == 'y') {
		isFast = 1;
	}

	int money = 0;
	if(weight <= 1000) {
		money = 8;
	} else {
		money = 8 + ((weight - 1000) / 500) * 4;
		if((weight - 1000) % 500 != 0) {
			money += 4;
		}
	}

	if(isFast) {
		money += 5;
	}

	printf("%d",money);

	return 0;
}
