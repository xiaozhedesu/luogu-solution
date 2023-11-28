#include <stdio.h>

int isOdd(int num) {
	return num % 2 == 1;
}

int main() {
	int m,n;
	scanf("%d %d", &m, &n);

	int sum = 0;
	for(int i = m; i <= n; i++) {
		if(isOdd(i)) {
			sum += i;
		}
	}

	printf("%d",sum);

	return 0;
}
