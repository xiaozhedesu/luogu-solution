#include <stdio.h>
#include <math.h>

int main() {
	int length;
	scanf("%d",&length);
	double data[length][3];
	for(int outer = 0; outer < length; outer++) {
		for(int inner = 0; inner < 3; inner++) {
			scanf("%lf",&data[outer][inner]);
		}
	}

	double time = 0;
	for(int turn = 0; turn < length; turn++) {
		double distance = sqrt(pow(data[turn][0],2) + pow(data[turn][1],2));
		time += 2 * distance / 50 + 1.5 * data[turn][2];
	}
	int result;
	if(time > (int)time) {
		result = time + 1;
	} else {
		result = time;
	}

	printf("%d",result);

	return 0;
}
