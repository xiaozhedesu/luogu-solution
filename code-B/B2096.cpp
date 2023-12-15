#include <iostream>
#include <map>

using namespace std;
const int LEN = 1000010;
int num[LEN];

int main() {
	int n;
	cin >> n;
	int max = 0;
	for(int i = 0; i < n; i++) {
		cin >> num[i];
		if(num[i] > max) {
			max = num[i];
		}
	}

	map<int,int> result;
	for(int i = 0; i <= max; i++) {
		result[i] = 0;
	}

	for(int i = 0; i < n; i++) {
		result[num[i]]++;
	}

	for(int i = 0; i <= max; i++) {
		cout << result[i] << '\n';
	}
	return 0;
}
