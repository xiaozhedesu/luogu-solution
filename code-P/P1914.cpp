#include <iostream>

using namespace std;

char decoder(char cha,int shift) {
	while(cha + shift > 'z') cha -= 26;
	cha += shift;
	return cha;
}

int main() {
	int shift;
	cin >> shift;
	string str;
	cin >> str;
	for(int i = 0; i < str.length(); i++)
		cout << decoder(str[i],shift);

	return 0;
}