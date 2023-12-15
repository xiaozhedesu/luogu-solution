#include <iostream>

using namespace std;
const int LEN = 5001;
bool akari[LEN];

int main() {
	int n;
	cin >> n;

	//���ص�
	for(int i = 2; i <= n; i++) {
		for(int j = i; j <= n; j += i) {
			akari[j] = !akari[j];
		}
	}

	//������
	for(int i = 1; i <= n; i++) {
		if(!akari[i]) {
			cout << i << " ";
		}
	}

	return 0;
}
