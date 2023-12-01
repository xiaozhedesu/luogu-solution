#include <stdio.h>

int howMuchApple(int n) {
	static int array[100] = {1};
	if(array[n - 1] == 0) {
		array[n - 1] = howMuchApple(n - 1) + n;
	}
	return array[n - 1];
}

int main() {
	int n;
	scanf("%d",&n);

	int result = howMuchApple(n);
	printf("%d",result);

	return 0;
}
