#include <stdio.h>

int isLeapyear(int year) {
	//年能被4整除且不能被100整除
	int boo1 = year % 4 == 0 && year % 100 != 0;
	//年能被400整除
	int boo2 = year % 400 == 0;
	return boo1 || boo2;
}

int getDaysInMonth(int year, int month) {
	//判断月份
	//大月
	int isBigMonth = month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12;
	//小月
	int isSmallMonth = month == 4 || month == 6 || month == 9 || month == 11;

	//根据月数判断天数
	if (isBigMonth) {
		return 31;
	} else if (isSmallMonth) {
		return 30;
	} else {
		//二月
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
