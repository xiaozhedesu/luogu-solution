#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
	if(num < 2) {
		return false;
	}
	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int num;
	cin >> num;
	for(int i = 0; i <= sqrt(num); i++) {
		if(isPrime(i) && num % i == 0) {
			cout << num / i;
			return 0;
		}
	}

	return 0;
}
