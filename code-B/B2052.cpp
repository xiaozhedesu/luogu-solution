#include <stdio.h>

int main() {
	int a, b, result;
	char sign;
	scanf("%d %d %c",&a,&b,&sign);

	switch (sign) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			if(b == 0) {
				printf("Divided by zero!");
				return 0;
			} else {
				result =  a / b;
			}
			break;
		default:
			printf("Invalid operator!");
			return 0;
	}

	printf("%d",result);

	return 0;
}
