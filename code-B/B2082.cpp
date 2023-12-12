#include <iostream>

using namespace std;

int main() {
	int left,right;
	cin >> left >> right;

	int result = 0;
	for(int turn = left; turn <= right; turn++) {
		int num = turn;
		while(num != 0) {
			if(num % 10 == 2) {
				result++;
			}
			num /= 10;
		}
	}

	cout << result;

	return 0;
}
