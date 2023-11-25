#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	scanf("%d",&num);

	int array[3];
	array[0] = (num % 3 == 0)? 3 : 0;
	array[1] = (num % 5 == 0)? 5 : 0;
	array[2] = (num % 7 == 0)? 7 : 0;

	if(array[0] + array[1] + array[2] == 0) {
		putchar('n');
		return 0;
	}
	for(int i = 0; i < 3; i++) {
		if(array[i] != 0) {
			printf("%d ",array[i]);
		}
	}
	return 0;
}
