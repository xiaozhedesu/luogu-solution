#include <iostream>
#include <iomanip>

using namespace std;

int factorial(int num) {
	if(num <= 0) {
		return 1;
	}
	static int fac[20] = {1};
	if(fac[num - 1] == 0) {
		fac[num - 1] = factorial(num - 1) * num;
	}
	return fac[num - 1];
}

long double calcE(int quality) {
	long double e = 1;

	for(int turn = 1; turn <= quality; turn++) {
		e += 1.0 / factorial(turn);
	}

	return e;
}

int main() {
	int n;
	scanf("%d",&n);

	long double result = calcE(n);

	cout << fixed << setprecision(10) << result;
	return 0;
}
