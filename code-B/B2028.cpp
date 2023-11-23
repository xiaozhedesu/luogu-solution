#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
	int num;
	scanf("%3d",&num);


	printf("%d%d%d", num % 10, num / 10 % 10, num / 100);

	return 0;
}
