#include <stdio.h>

int main(int argc, char *argv[]) {
	int disease,dead;
	scanf("%d %d",&disease,&dead);

	printf("%.3lf%%",(double)dead * 100 / disease);
	return 0;
}
