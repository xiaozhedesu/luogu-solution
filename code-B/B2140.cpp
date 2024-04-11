#include <iostream>
#include <vector>

using namespace std;
using i64 = long long;

bool check(int num){
	int a = 0,b = 0;
	while(num != 0){
		if(num % 2 == 1)
			a++;
		else
			b++;
		num /= 2;
	}
	return a > b;
}

int main() {
	int n;
	cin >> n;
	int a = 0,b = 0;
	for(int i = 1;i <= n;i++){
		a += check(i);
		b += !check(i);
	}
	cout << a << " " << b;

	return 0;
}
