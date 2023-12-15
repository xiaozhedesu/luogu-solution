#include <iostream>

using namespace std;

const int len = 5;
int matrix[len][len];

void swap(int array1[],int array2[],int length) {
	for(int i = 0; i < length; i++) {
		int temp = array1[i];
		array1[i] = array2[i];
		array2[i] = temp;
	}
}

int main() {
	for(int outer = 0; outer < len; outer++) {
		for(int inner = 0; inner < len; inner++) {
			cin >> matrix[outer][inner];
		}
	}

	int m,n;
	cin >> m >> n;
	swap(matrix[m - 1],matrix[n - 1],len);

	for(int outer = 0; outer < len; outer++) {
		for(int inner = 0; inner < len; inner++) {
			cout << matrix[outer][inner] << " ";
		}
		cout << "\n";
	}

	return 0;
}
