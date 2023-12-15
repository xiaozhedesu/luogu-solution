#include <iostream>

using namespace std;
int isPrinted[101];

int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		if(!isPrinted[temp]) {
			cout << temp << " ";
			isPrinted[temp] = true;
		}
	}

	return 0;
}
