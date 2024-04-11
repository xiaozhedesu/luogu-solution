#include <iostream>
#include <vector>

using namespace std;
using i64 = long long;

char sen[210];
int main() {
	scanf("%[^\n]",sen);
	string origin,turned;
	cin >> origin >> turned;

	string temp;
	char* cha = sen;
	while(*cha != '\0') {
		if(*cha == ' ') {
			if(temp == origin)
				cout << turned << " ";
			else
				cout << temp << " ";
			temp = "";
		} else {
			temp += *cha;
		}
		cha++;
	}
	if(temp == origin)
		cout << turned;
	else
		cout << temp;

	return 0;
}
