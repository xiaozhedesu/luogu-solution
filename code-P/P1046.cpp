#include <stdio.h>

int getAppleNumber(int *appleHeights,int length,int maxHeightByHand);

int scanArray(int *array,int length);

int main() {
	int appleHeights[10];
	scanArray(appleHeights,10);
	int maxHeightByHand;
	scanf("%d",&maxHeightByHand);

	int appleNum = getAppleNumber(appleHeights,10,maxHeightByHand);
	printf("%d",appleNum);

	return 0;
}

int getAppleNumber(int *appleHeights,int length,int maxHeightByHand) {
	int appleNum = 0;
	int MaxHeightByBandeng = maxHeightByHand + 30;
	for(int index = 0; index < length; index++) {
		if(*(appleHeights + index) <= MaxHeightByBandeng) {
			//如果这个苹果高度小于陶陶踩板凳能够到的高度就能摘下来
			appleNum++;
		}
	}
	return appleNum;
}

int scanArray(int *array,int length) {
	for(int index = 0; index < length; index++) {
		scanf("%d",array + index);
	}
}