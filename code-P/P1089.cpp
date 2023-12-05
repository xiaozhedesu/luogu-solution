#include <stdio.h>

void scanArray(int array[], int length) {
	for (int index = 0; index < length; index++) {
		scanf("%d", &array[index]);
	}
}

int useMoney(int budget[], int length) {
	double money = 0;
	double temp = 0;
	for(int turn = 0; turn < 12; turn++) {
		money += 300;
		if(money < budget[turn]) {
			return -turn - 1;
		}
		while(money - budget[turn] > 100) {
			money -= 100;
			temp += 100;
		}
		money -= budget[turn];
	}
	return money + temp * 1.2;
}

int main() {
	int budget[12];
	scanArray(budget,12);

	int result = useMoney(budget,12);
	printf("%d",result);

	return 0;
}
