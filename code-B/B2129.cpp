#include <iostream>
#include <vector>

using namespace std;
using i64 = long long;

int max(int a,int b,int c){
	int m = (a > b) ? a : b;
	m = (m > c) ? m : c;
	return m;
}

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	double res = (double) max(a,b,c) / (max(a + b,b,c) * max(a,b,b + c));
	printf("%.3lf",res);

	return 0;
}
