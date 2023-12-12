#include <iostream>
#include <string.h>

using namespace std;

bool has7(int n) {
	if(n % 7 == 0) {
		return true;
	}

	char numStr[20];
	sprintf(numStr,"%d",n);
	for(int i = 0; i < strlen(numStr); i++) {
		if(numStr[i] == '7') {
			return true;
		}
	}

	return false;
}

int main() {
	int n;
	cin >> n;

	long long sum = 0;
	for(int i = 1; i <= n; i++) {
		if(!has7(i)) {
			sum += i * i;
		}
	}

	cout << sum;

	return 0;
}
