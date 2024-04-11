#include <iostream>
#include <vector>
#include <set>

using namespace std;
using i64 = long long;

int main() {
	string str;
	set<string> s;
	cin >> str;
	do{
		if(s.find(str) == s.end()) {
			cout << str;
			s.insert(str);
		}
		cin >> str;
	}while(str != "0");

	return 0;
}
