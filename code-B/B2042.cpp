#include <stdio.h>

int main(int argc, char *argv[]) {
	int num;
	scanf("%d",&num);

	int boo = num % 3 == 0 && num % 5 == 0;
	if(boo) {
		printf("YES");
	} else {
		printf("NO");
	}

	return 0;
}
