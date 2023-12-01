#include <stdio.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	int max = a;
	max = (b > max)? b : max;
	max = (c > max)? c : max;

	for(int i = 2; i <= max; i++) {
		if(a % i == b % i && b % i == c % i) {
			printf("%d", i);
			break;
		}
	}

	return 0;
}
