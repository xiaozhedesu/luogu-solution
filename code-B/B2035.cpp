#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	scanf("%d",&num);

	if(num > 0) {
		printf("positive");
	} else if(num == 0) {
		printf("zero");
	} else {
		printf("negative");
	}

	return 0;
}
