#include <iostream>

using namespace std;
const int inf = 10000000;
const int LEN = 110;
int num[LEN];

int findMax(int length) {
	int max = -inf;
	for(int i = 0; i < length; i++) {
		if(max < num[i]) {
			max = num[i];
		}
	}
	return max;
}

int sum(int length,int max) {
	int result = 0;
	for(int i = 0; i < length; i++) {
		if(num[i] == max) continue;
		result += num[i];
	}
	return result;
}

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> num[i];
	}

	int max = findMax(n);
	int result = sum(n,max);
	cout << result;

	return 0;
}
