#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

int primeNumber(int num);

int isPrime(int num);

int main() {
	int num;
	scanf("%d",&num);

	int result = primeNumber(num);
	printf("%d",result);

	return 0;
}

int primeNumber(int num) {
	int count = 0;
	int sum = 0;
	int i = 2;
	while(sum < num) {
		if(isPrime(i)) {
			if(sum + i > num){
				return count;
			}
			printf("%d\n",i);
			count++;
			sum += i;
		}
		i++;
	}
	return count;
}

int isPrime(int num) {
	if(num<=1) {
		return FALSE;
	}

	for(int i = 2; i <= sqrt(num); i++) {
		if(num%i == 0) {
			return FALSE;
		}
	}

	return TRUE;
}