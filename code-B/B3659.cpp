#include <iostream>
#include <vector>

using namespace std;
using i64 = long long;

int code,res = 0;

void solve(){
	int num;
	cin >> num;
	if(num == code) res++;
} 

int main() {
	int n;
	cin >> n >> code;
	while(n--) solve();
	cout << res;
	return 0;
}
