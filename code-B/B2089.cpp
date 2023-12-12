#include <iostream>

using namespace std;
const int LEN = 110;
int num[LEN];

int main() {
	int n;
	cin >> n;
	for(int i = n - 1;i >= 0; i--) {
		cin >> num[i];
	}

	for(int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}

	return 0;
}
