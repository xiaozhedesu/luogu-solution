#include <stdio.h>

int isSuki(int number, int people) {
	int boo1 = number % 2 == 0;
	int boo2 = number > 4 && number <= 12;
	if (people == 1) {
		//��������ͬʱ����
		return boo1 && boo2;
	} else if (people == 2) {
		//��������������һ������
		return !(!boo1 && !boo2);
	} else if (people == 3) {
		//��������ֻ����һ�����������
		return (boo1 + boo2 == 1) ? 1 : 0;
	} else if (people == 4) {
		//����������������
		return !boo1 && !boo2;
	}
}

int main() {
	int number;
	scanf("%d", &number);

	for (int i = 1; i <= 4; i++) {
		printf("%d ", isSuki(number, i));
	}

	return 0;
}
