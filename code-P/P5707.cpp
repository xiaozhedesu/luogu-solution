#include <stdio.h>

int main() {
	int s, v;
	scanf("%d %d", &s, &v);

	int hour = 7;
	int t;
	//��t��ֵ������û�й���ԭ���ǲ���t��ʧ������
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
