#include <iostream>
#include <cmath>

using namespace std;

bool isPalindromic(int num) {
	string numStr = to_string(num);
	int left = 0,right = numStr.length() - 1;
	while(left <= right) {
		if(numStr[left] != numStr[right]) return false;
		left++;
		right--;
	}
	return true;
}

bool isPrime(int num) {
	if(num < 2 || num != 2 && num % 2 == 0)
		return false;

	for(int number = 3; number <= sqrt(num); number += 2) {
		if(num % number == 0) {
			return false;
		}
	}

	return true;
}

int main() {
	int left,right;
	cin >> left >> right;

	for(int i = left; i <= right; i++) {
		if(isPrime(i) && isPalindromic(i))
			cout << i << "\n";
	}

	return 0;
}
