#include <stdio.h>
#include <string.h>

void isRightSpecialNum(char *nums,int length,char specialNum) {
	int result = 0,count = 1;
	for(int index = 0; index < length-1; index++) {
		if(nums[index] == '-') {
			continue;
		}
		int num = nums[index] - '0';
		result +=num * count++;
	}

	char charResult;
	if(result % 11 == 10) {
		charResult = 'X';
	} else {
		charResult = '0' + result % 11;
	}
	
	if(specialNum == charResult) {
		printf("Right");
	} else {
		nums[12] = charResult;
		printf("%s",nums);
	}
}

int main() {
	char nums[14];
	scanf("%s",&nums);
	char specialNum = nums[12];

	isRightSpecialNum(nums,strlen(nums),specialNum);

	return 0;
}
