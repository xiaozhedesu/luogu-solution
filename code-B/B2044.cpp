#include <stdio.h>

void bubbleSort(int array[],int length) {
	for(int outer = 0; outer < length - 1; outer++) {
		for(int inner = 0; inner < length - 1 - outer; inner++) {
			if(array[inner] > array[inner + 1]) {
				int temp = array[inner];
				array[inner] = array[inner + 1];
				array[inner + 1] = temp;
			}
		}
	}
}

int main(int argc, char *argv[]) {
	int score[3];
	for(int i = 0; i < 3; i++) {
		scanf("%d",score + i);
	}

	bubbleSort(score,3);

	if(score[0] < 60 && score[1] >= 60) {
		printf("1");
	} else {
		printf("0");
	}

	return 0;
}
