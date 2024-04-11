#include <iostream>
#include <vector>

using namespace std;
using i64 = long long;

void reverse(string& str) {
	for(int i = 0; i < str.length() / 2; i++) {
		char temp = str[i];
		str[i] = str[str.length() - 1 - i];
		str[str.length() - 1 - i] = temp;
	}
}

string XtoM(i64 num,int m) {
	string res;
	while(num) {
		int d = num % m;
		if(d >= 0 && d < 10)
			res += (char)(d + '0');
		else if(d >= 10 && d < 16)
			res += char(d - 10 + 'A');
		num /= m;
	}
	reverse(res);
	return res;
}

int main() {
	i64 num;
	int m;
	cin >> num >> m;
	cout << XtoM(num,m);

	return 0;
}
