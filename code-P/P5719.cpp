#include <stdio.h>

int sum(int nums[],int length);

double average(int nums[],int length);

int main() {
	int n,k;
	scanf("%d %d",&n,&k);

	int aNums[n],bNums[n];
	int aNumsLength = 0,bNumsLength = 0;
	
	for(int i = 1;i <= n;i++){
		if(i%k==0){
			aNums[aNumsLength++] = i;
		}else{
			bNums[bNumsLength++] = i;
		}
	}
	
	printf("%.1f %.1f",average(aNums,aNumsLength),average(bNums,bNumsLength));

	return 0;
}

int sum(int nums[],int length) {
	int sum = 0;
	for(int index = 0; index < length; index++) {
		sum+=nums[index];
	}
	return sum;
}

double average(int nums[],int length) {
	return (double)sum(nums,length) / length;
}