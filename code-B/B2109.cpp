#include <iostream>
#include <vector>

using namespace std;
using i64 = long long;

int main() {
	char cha;
	int res = 0;
	int temp;
	while((temp = scanf("%c",&cha)) != EOF && cha != '\n'){
		if(cha >= '0' && cha <='9')
			res++;
	}
	cout << res;
	return 0;
}
