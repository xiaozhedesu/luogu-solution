#include <stdio.h>

int main() {
	int s, v;
	scanf("%d %d", &s, &v);

	int t;
	//��t��ֵ������û�й���ԭ���ǲ���t��ʧ������
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
