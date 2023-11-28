#include <stdio.h>

void scanArray(int array[],int length) {
	for(int index = 0; index < length; index++) {
		scanf("%d",array + index);
	}
}

double average(int ages[],int num) {
	double result = 0;
	for(int index = 0; index < num; index++) {
		result += ages[index];
	}
	result /= num;
	return result;
}

int main() {
	int num;
	scanf("%d",&num);
	int ages[num];
	scanArray(ages,num);

	printf("%.2lf",average(ages,num));

	return 0;
}
