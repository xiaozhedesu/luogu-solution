#include <stdio.h>

void scanArray2(int array[],int length);

int main(int argc, char *argv[]) {
	int streetLength,areaNum;
	scanf("%d %d", &streetLength, &areaNum);
	int subwayAreas[2 * areaNum];
	scanArray2(subwayAreas,areaNum);

	int killTree[streetLength + 1] = {0};

	for(int outer = 0; outer < areaNum; outer++) {
		for(int inner = subwayAreas[2 * outer]; inner <= subwayAreas[2 * outer + 1]; inner++) {
			killTree[inner] = 1;
		}
	}

	int result = 0;
	for(int index = 0; index <= streetLength; index++) {
		if(killTree[index] == 0) {
			result++;
		}
	}

	printf("%d",result);

	return 0;
}

void scanArray2(int array[],int length) {
	for(int index = 0; index < length; index++) {
		scanf("%d %d",array + 2 * index,array + 2 * index + 1);
	}
}