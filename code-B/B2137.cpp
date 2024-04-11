#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
#define int long long

bool isPrime(int num) {
	if(num == 2) return true;
	if(num < 2 || num % 2 == 0)
		return false;
	for(int i = 2; i <= sqrt(num); i++) {
		if(num % 2 == 0)
			continue;
		if(num % i == 0)
			return false;
	}
	return true;
}

signed main() {
	int left,right,res = 0;
	cin >> left >> right;
	if(left > right) {
		int temp = left;
		left = right;
		right = temp;
	}
	for(int i = left; i <= right; i++) {
		res += isPrime(i);
	}
	cout << res;

	return 0;
}
