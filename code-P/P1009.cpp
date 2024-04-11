#include <iostream>
#include <vector>
#include <algorithm>
#define endl '\n'

using namespace std;
using i64 = long long;

string toStringNum(int n) {
	string num;
	while(n) {
		num += (char)(n % 10 + '0');
		n /= 10;
	}
	return num;
}

string reverseNum(string str) {
	int n = str.length();
	for(int i = 0; i < n / 2; i++) {
		char temp = str[i];
		str[i] = str[n - 1 - i];
		str[n - 1 - i] = temp;
	}
	return str;
}

string add(string num1,string num2) {
	string res;
	int len1 = num1.length(),len2 = num2.length();
	int n1 = 0,n2 = 0,sum,carry = 0;
	for(int i = 0; i < max(len1,len2); i++) {
		n1 = (i < len1) ? (num1[i] - '0') : 0;
		n2 = (i < len2) ? (num2[i] - '0') : 0;

		sum = n1 + n2 + carry;
		res += (char)(sum % 10 + '0');
		carry = sum / 10;
	}
	while(carry) {
		res += (char)(carry % 10 + '0');
		carry /= 10;
	}
	return res;
}

string kake(string num1,string num2) {
	string res = "0",digit,temp;
	for(int i = 0; i < num2.length(); i++) {
		temp = "0";
		for(int j = 0; j < num2[i] - '0'; j++) {
			temp = add(temp,num1);
		}
		res = add(res,digit + temp);
		digit += '0';
	}
	return res;
}

string facSum(int n) {
	string res = "0",fac = "1";
	for(int i = 1; i <= n; i++) {
		fac = kake(fac,toStringNum(i));
//		cout << reverseNum(fac) << endl;
		res = add(res,fac);
	}
	return reverseNum(res);
}

int main() {
	int n;
	cin >> n;

	cout << facSum(n) << endl;

	return 0;
}
