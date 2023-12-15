#include <iostream>
#include <cmath>

using namespace std;

void printPos(int x,int y) {
	cout << "(" << x << "," << y << ") ";
}

void printRow(int x,int y,int n) {
	for(int i = 1; i <= n; i++) {
		printPos(x,i);
	}
	cout << "\n";
}

void printCol(int x,int y,int n) {
	for(int i = 1; i <= n; i++) {
		printPos(i,y);
	}
	cout << "\n";
}

void printDiagonal1(int x,int y,int n) {
	int i = x,j = y;
	while(i != 1 && j != 1) {
		i--;
		j--;
	}
	for(; i <= n && j <= n; i++,j++) {
		printPos(i,j);
	}
	cout << "\n";
}

void printDiagonal2(int x,int y,int n) {
	int i = x,j = y;
	while(i != n && j != 1) {
		i++;
		j--;
	}
	for(; i > 0 && j <= n; i--,j++) {
		printPos(i,j);
	}
	cout << "\n";
}

int main() {
	int n,x,y;
	cin >> n >> x >> y;

	printRow(x,y,n);
	printCol(x,y,n);
	printDiagonal1(x,y,n);
	printDiagonal2(x,y,n);

	return 0;
}
