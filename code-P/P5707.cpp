#include <stdio.h>

int main() {
	int s, v;
	scanf("%d %d", &s, &v);

	int t;
	//给t赋值，怀疑没有过的原因是不是t丢失数据了
	if ((double)s / v > s / v) {
		t = s / v + 1;
	} else {
		t = s / v;
	}
	int minute = (24 + 8) * 60 - t - 10;

	int hour = minute / 60;
	if (hour >= 24) {
		hour -= 24;
	}
	minute %= 60;

	printf("%02d:%02d", hour, minute);

	return 0;
}
