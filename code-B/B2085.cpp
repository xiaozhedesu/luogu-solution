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
	int n;
	cin >> n;

	int num = 2;
	while(n != 0) {
		if(isPrime(num))
			n--;
		num++;
	}

	cout << num - 1;

	return 0;
}
