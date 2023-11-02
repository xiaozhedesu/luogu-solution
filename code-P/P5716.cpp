#include <stdio.h>

int isLeapyear(int year) {
	//���ܱ�4�����Ҳ��ܱ�100����
	int boo1 = year % 4 == 0 && year % 100 != 0;
	//���ܱ�400����
	int boo2 = year % 400 == 0;
	return boo1 || boo2;
}

int getDaysInMonth(int year, int month) {
	//�ж��·�
	//����
	int isBigMonth = month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12;
	//С��
	int isSmallMonth = month == 4 || month == 6 || month == 9 || month == 11;

	//���������ж�����
	if (isBigMonth) {
		return 31;
	} else if (isSmallMonth) {
		return 30;
	} else {
		//����
		if (isLeapyear(year)) {
			return 29;
		} else {
			return 28;
		}
	}
}

int main() {
	int year, month;
	scanf("%d %d", &year, &month);

	int days = getDaysInMonth(year, month);
	printf("%d", days);
	return 0;
}
