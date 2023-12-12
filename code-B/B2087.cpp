#include <iostream>

using namespace std;
const int LEN = 110;

int main() {
	int n,m;
	cin >> n;
	int nums[LEN];
	for(int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	cin >> m;

	int result = 0;

	for(int i = 0; i < n; i++) {
		if(nums[i] == m) {
			result++;
		}
	}

	cout << result;

	return 0;
}
