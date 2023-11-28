#include <stdio.h>

int main() {
	int day;
	scanf("%d",&day);
	int goals[100][3];
	for(int outer = 0; outer < day; outer++) {
		for(int inner = 0; inner < 3; inner++) {
			scanf("%d",&goals[outer][inner]);
		}
	}

	int gold = 0,silver = 0,bronze = 0;
	for(int index = 0; index < day; index++) {
		gold += goals[index][0];
		silver += goals[index][1];
		bronze += goals[index][2];
	}
	int sum = gold + silver + bronze;
	printf("%d %d %d %d", gold, silver, bronze, sum);

	return 0;
}
