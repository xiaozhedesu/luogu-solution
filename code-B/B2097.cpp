#include <iostream>

using namespace std;
const int LEN = 110;
int num[LEN];

int main() {
	int n;
	cin >> n;
	int frontNum = 0;
	int maxLen = 0;
	int len = 0;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if(temp == frontNum) {
			len++;
		} else {
			if(maxLen < len) {
				maxLen = len;
			}
			len = 1;
		}
		frontNum = temp;
	}
	if(maxLen < len) {
		maxLen = len;
	}

	cout << maxLen;

	return 0;
}
