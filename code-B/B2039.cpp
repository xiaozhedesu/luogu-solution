#include <stdio.h>

int main(int argc, char *argv[]) {
	long long num1, num2;
	scanf("%ld %ld",&num1,&num2);

	if(num1 < num2) {
		printf("<");
	} else if(num1 == num2) {
		printf("=");
	} else {
		printf(">");
	}

	return 0;
}
