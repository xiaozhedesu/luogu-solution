#include <iostream>

using namespace std;

int main() {
	int rols,cols;
	char cha;
	int center;
	cin >> rols >> cols >> cha >> center;

	for(int outer = 0; outer < rols; outer++) {
		for(int inner = 0; inner < cols; inner++) {
			if(outer == 0 || outer == rols - 1 || inner == 0 || inner == cols - 1) {
				cout << cha;
			} else if(center) {
				cout << cha;
			} else {
				cout << ' ';
			}
		}
		cout << '\n';
	}

	return 0;
}
