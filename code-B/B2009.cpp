#include <stdio.h>

int calc(int a,int b,int c) {
	return (a + b) / c;
}

int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);

	printf("%d",calc(a,b,c));

	return 0;
}
