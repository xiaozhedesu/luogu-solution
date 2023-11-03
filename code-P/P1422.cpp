#include <stdio.h>

double calcElectricityMoney(int electricity);

int main() {
	int electricity;
	scanf("%d",&electricity);

	double money = calcElectricityMoney(electricity);
	
	printf("%.1f",money);

	return 0;
}

double calcElectricityMoney(int electricity) {
	if(electricity<= 0) {
		return 0;
	} else if(electricity < 150) {
		return 0.4463*electricity;
	} else if(electricity < 400) {
		return 0.4463 * 150 + 0.4663 * (electricity - 150);
	} else {
		return 0.4463 * 150 + 0.4663 * 250 + 0.5663 * (electricity - 400);
	}
}