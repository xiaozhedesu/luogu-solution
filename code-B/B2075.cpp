#include <stdio.h>

int main() {
	int a,b;
	scanf("%d %d",&a,&b);

	int result = 1;
	for(int turn = 0; turn < b; turn++) {
		result *= a;
		result %= 1000;
	}

	printf("%03d",result);

	return 0;
}