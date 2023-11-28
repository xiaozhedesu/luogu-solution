#include <stdio.h>

void scanArray(int array[],int length) {
	for(int index = 0; index < length; index++) {
		scanf("%d",array + index);
	}
}

int findMaxNumber(int array[],int length) {
	int max = array[0];
	for(int index = 1; index < length; index++) {
		if(max < array[index]) {
			max = array[index];
		}
	}
	return max;
}

int main() {
	int n;
	scanf("%d",&n);
	int score[n];
	scanArray(score,n);

	int result = findMaxNumber(score,n);
	printf("%d",result);

	return 0;
}
