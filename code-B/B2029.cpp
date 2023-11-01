#include <stdio.h>
#define PI 3.14

double calcVolume(int h, int r) {
	return PI * r * r * h / 1000;
}

int calcResult(double busket) {
	double result = 20 / busket;
	if (result > (int)result) {
		result++;
	}
	return result;
}

int main() {
	int h, r;
	scanf("%d %d", &h, &r);

	double busket = calcVolume(h, r);
	int result = calcResult(busket);
	printf("%d", result);

	return 0;
}
