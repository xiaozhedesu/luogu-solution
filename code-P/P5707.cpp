#include <stdio.h>

int main() {
	int s, v;
	scanf("%d %d", &s, &v);

	int hour = 7;
	int t;
	//给t赋值，怀疑没有过的原因是不是t丢失数据了
	if ((double)s / v > s / v) {
		t = s / v + 1;
	} else {
		t = s / v;
	}
	int minute = 60 - t - 10;

	while (minute < 0) {
		minute += 60;
		hour--;
	}

	printf("%02d:%02d", hour, minute);

	return 0;
}
