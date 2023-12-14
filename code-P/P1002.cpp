#include <iostream>

using namespace std;
long long matrix[30][30];

int main() {
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;

	for(int outer = 0; outer <= x1; outer++) {
		for(int inner = 0; inner <= y1; inner++) {
			matrix[outer][inner] = 1;
		}
	}

	matrix[x2][y2] = 0;
	if(x2 + 2 <= x1 && y2 + 1 <= y1) matrix[x2 + 2][y2 + 1] = 0;
	if(x2 + 1 <= x1 && y2 + 2 <= y1) matrix[x2 + 1][y2 + 2] = 0;
	if(x2 - 2 >= 0 && y2 + 1 <= y1) matrix[x2 - 2][y2 + 1] = 0;
	if(x2 - 1 >= 0 && y2 + 2 <= y1) matrix[x2 - 1][y2 + 2] = 0;
	if(x2 - 2 >= 0 && y2 - 1 >= 0) matrix[x2 - 2][y2 - 1] = 0;
	if(x2 - 1 >= 0 && y2 - 2 >= 0) matrix[x2 - 1][y2 - 2] = 0;
	if(x2 + 2 <= x1 && y2 - 1 >= 0) matrix[x2 + 2][y2 - 1] = 0;
	if(x2 + 1 <= x1 && y2 - 2 >= 0) matrix[x2 + 1][y2 - 2] = 0;

//	for(int outer = 0; outer <= x1; outer++) {
//		for(int inner = 0; inner <= y1; inner++) {
//			cout << matrix[outer][inner] << ' ';
//		}
//		cout << "\n";
//	}

	for(int outer = 0; outer <= x1; outer++) {
		for(int inner = 0; inner <= y1; inner++) {
			if(matrix[outer][inner] == 0) {
				continue;
			} else {
				if(outer == 0 && inner == 0) {
					matrix[outer][inner] = 1;
				} else if(outer == 0 && inner != 0) {
					matrix[outer][inner] = matrix[outer][inner - 1];
				} else if(outer != 0 && inner == 0) {
					matrix[outer][inner] = matrix[outer - 1][inner];
				} else {
					matrix[outer][inner] = matrix[outer - 1][inner] + matrix[outer][inner - 1];
				}
			}
		}
	}

	cout << matrix[x1][y1];
	return 0;
}
