#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0
//两个独立的方法都能单独拿来用固然好，但是超时了）
int isPalindromic(int num);

int isPrime(int num);

int main() {
	int a,b;
	scanf("%d %d",&a,&b);

	for(int num = a; num <= b; num++) {
		if(isPrime(num) && isPalindromic(num)) {
			printf("%d\n",num);
		}
	}

	return 0;
}

int isPalindromic(int num) {
	//TODO
	int digit = 0;
	int temp = num;
	while (temp !=0) {
		digit++;
		temp/=10;
	}
	char numString[9];
	//itoa(num,numString,10);
	sprintf(numString,"%d",num);
	char *left = &numString[0];
	char *right = &numString[digit - 1];
	while (left < right) {
		if(*left != *right) {
			return FALSE;
		}
		left++;
		right--;
	}
	return TRUE;
}

int isPrime(int num) {
	if(num <=1) {
		return FALSE;
	}

	for(int number = 2; number <= sqrt(num); number++) {
		if(num % number == 0) {
			return FALSE;
		}
	}

	return TRUE;
}
