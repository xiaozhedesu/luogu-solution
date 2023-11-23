#include <stdio.h>

int main(int argc, char *argv[]) {
	int a1,a2,index;
	scanf("%d %d %d", &a1, &a2, &index);
	int d = a2 - a1;
	int result = a1 + (index - 1) * d;
	printf("%d",result);

	return 0;
}
