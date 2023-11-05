#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int isPrime(int num);

int findBiggerPrime(int num);

int main() {
	int num;
	scanf("%d",&num);

	int result = findBiggerPrime(num);
	printf("%d",result);

	return 0;
}

int findBiggerPrime(int num) {
	for(int i = 2; i <= sqrt(num); i++) {
		if(isPrime(i)) {
			if(num%i == 0) {
				int num2 = num / i;
				return (i>num2)?i:num2;
			}
		}
	}
}

int isPrime(int num) {
	if(num <= 1) {
		return FALSE;
	}

	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0) {
			return FALSE;
		}
	}
	return TRUE;
}
