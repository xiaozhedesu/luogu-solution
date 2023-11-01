#include <stdio.h>

int main() {
	int s, v;
	scanf("%d %d", &s, &v);

	int t = s / v;
	int hour = 7;
	while (t > 60) {
		t -= 60;
		hour--;
	}
	int minute = 60 - t;

	//»¹Òªµ¹À¬»øÄØ
	if (minute - 10 < 0) {
		minute += 50;
		hour--;
	}
	minute -= 10;

	printf("%02d:%02d", hour, minute);

	return 0;
}
