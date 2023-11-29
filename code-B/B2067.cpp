#include <stdio.h>

void scanArray(int array[], int length) {
	for(int i = 0; i < length; i++) {
		scanf("%d",array + i);
	}
}

int notGetMedicine(int medicine, int wantMedicine[], int people) {
	int count = 0;
	for(int turn = 0; turn < people; turn++) {
		if(medicine >= wantMedicine[turn]) {
			medicine -= wantMedicine[turn];
		} else {
			count++;
		}
	}
	return count;
}

int main() {
	int medicine, people;
	scanf("%d %d", &medicine, &people);
	int wantMedicine[people];
	scanArray(wantMedicine, people);

	int result = notGetMedicine(medicine, wantMedicine,people);
	printf("%d",result);

	return 0;
}
