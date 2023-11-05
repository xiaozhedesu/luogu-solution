#include <stdio.h>

int sum(int n);

int main() {
	int n;
	scanf("%d",&n);

	int result = sum(n);
	printf("%d",result);

	return 0;
}

int sum(int n) {
	if(n<=1) {
		return 1;
	} else {
		return n + sum(n-1);
	}
}