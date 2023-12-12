#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double bookPrice[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	double money = 0;
	for(int i = 0; i < 10; i++) {
		int num;
		cin >> num;
		money += num * bookPrice[i];
	}

	cout << setprecision(1) << fixed << money;

	return 0;
}
