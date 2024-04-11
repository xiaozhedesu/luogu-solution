#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'

using namespace std;
using i64 = long long;

void print(string str) {
	for(int i = 0; i < str.length(); i++) {
		if(str[i] >= 'a' && str[i] <= 'z')
			cout << (char)(str[i] - 32);
		else
			cout << str[i];
	}
}

int main() {
	string str;
	cin >> str;
	print(str);

	return 0;
}
