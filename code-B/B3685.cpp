#include <iostream>
#include <vector>

using namespace std;
#define int long long
#define endl '\n'

signed main() {
	int num[3];
	scanf("%c%c%c",&num[0],&num[1],&num[2]);
	
	int res = num[0] + num[1] + num[2];
	cout << res << endl;
	cout << res * res << endl;
	cout << res * res * res << endl;

	return 0;
}
