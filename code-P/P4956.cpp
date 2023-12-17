#include <iostream>

using namespace std;

int main() {
	int money;
	cin >> money;

	money /= 52 * 7;
	int k = 1;
	int x = money - 3 * k;
	while(x > 100) {
		k++;
		x -= 3;
	}

	cout << x << "\n" << k;

	return 0;
}