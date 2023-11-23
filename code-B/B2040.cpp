#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	scanf("%d",&num);

	if(num >= 10 && num <= 99) {
		printf("1");
	} else {
		printf("0");
	}

	return 0;
}
