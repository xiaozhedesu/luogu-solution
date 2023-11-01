#include <stdio.h>
#include <string.h>

//尝试用倒转字符串解决问题
void reverseSort(char *string, int length) {
	for (int index = 0; index < length / 2; index++) {
		char temp = string[index];
		string[index] = string[length - 1 - index];
		string[length - 1 - index] = temp;
	}
}

int main() {
	char num[10];
	scanf("%s", &num);

	reverseSort(num, strlen(num));
	printf("%s", num);

	return 0;
}
