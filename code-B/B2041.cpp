#include <stdio.h>

int main(int argc, char *argv[]) {
	int lucky,congra;
	scanf("%d %d",&lucky,&congra);

	if(lucky >= 10 || congra >= 20) {
		printf("1");
	} else {
		printf("0");
	}

	return 0;
}
