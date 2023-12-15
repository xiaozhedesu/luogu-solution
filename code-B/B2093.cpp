#include <iostream>

using namespace std;
const int LEN = 10010;
int num[LEN];

int search(int number,int length) {
	for(int i = 0; i < length; i++) {
		if(number == num[i]) {
			return i;
		}
	}
	return -1;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		num[i] = temp;
	}
	int number;
	cin >> number;

	int result = search(number,n);
	cout << result;

	return 0;
}
