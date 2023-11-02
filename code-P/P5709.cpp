#include <stdio.h>

int main() {
	unsigned int m, t, s;
	scanf("%d %d %d", &m, &t, &s);

	if (t <= 0) {
		printf("%d", m);
	} else {
		printf("%d", m - s / t);
	}
	return 0;
}
