#include <stdio.h>

int main(int argc, char *argv[]) {
	int candy[5];
	for(int i = 0; i < 5; i++) {
		scanf("%d",&candy[i]);
	}

	//
	int count = 0;
	for(int index = 0; index < 5; index++) {
		int temp = candy[index] / 3;
		count += candy[index] % 3;
		candy[index] = temp;
		if(index == 0) {
			candy[4] += temp;
			candy[index + 1] += temp;
		} else if(index == 4) {
			candy[index - 1] += temp;
			candy[0] += temp;
		} else {
			candy[index + 1] += temp;
			candy[index - 1] += temp;
		}
	}

	for(int index = 0; index < 5; index++) {
		printf("%d ",candy[index]);
	}
	putchar('\n');
	printf("%d",count);

	return 0;
}
