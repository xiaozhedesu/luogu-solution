#include <stdio.h>

int main(int argc, char *argv[]) {
	int nums[3];
	for(int index = 0; index < 3; index++) {
		scanf("%d",&nums[index]);
		printf("%8d ",nums[index]);
	}

	return 0;
}
