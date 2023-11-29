#include <stdio.h>

int main() {
	int length ;
	scanf("%d",&length);
	int data[length][2];
	double eff[length];
	for(int i = 0; i < length; i++) {
		scanf("%d %d", &data[i][0], &data[i][1]);
		eff[i] = (double)data[i][1] / data[i][0];
	}

	for(int turn = 1; turn < length; turn++) {
		char *result = NULL;
		if(eff[0] - eff[turn] > 0.05) {
			result = "worse";
		} else if(eff[0] - eff[turn] > -0.05) {
			result = "same";
		} else {
			result = "better";
		}
		printf("%s\n",result);
	}

	return 0;
}
