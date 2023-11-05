#include <stdio.h>

int grindStick(int length);

int main() {
	int length;
	scanf("%d",&length);

	int result = grindStick(length);
	printf("%d",result);

	return 0;
}

int grindStick(int length) {
	if(length<=1) {
		return 1;
	}
	int day = 1;
	while (length !=1) {
		length/=2;
		day++;
	}
	return day;
}
