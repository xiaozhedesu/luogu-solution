#include <stdio.h>

int main(int argc, char *argv[]) {
	char cha;
	int integer;
	float floatNum;
	double doubleNum;
	scanf("%c %d %f %lf", &cha, &integer, &floatNum, &doubleNum);

	printf("%c %d %f %lf", cha, integer, floatNum, doubleNum);
	return 0;
}
