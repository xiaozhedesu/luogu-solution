#include <stdio.h>

void calcTime(int a, int b, int c, int d) {
	int minute, time;

	if (d < b) {
		d += 60;
		c--;
	}
	minute = d - b;
	time = c - a;

	printf("%d %d", time, minute);
}

int main() {
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	calcTime(a, b, c, d);

	return 0;
}
