#include <bits/stdc++.h>
#define endl '\n'

using namespace std;
using i64 = long long;
int main(){
	priority_queue<int,vector<int>,greater<int>> fruit;
	int n;
	cin >> n;
	int x;
	for(int i = 0;i < n;i++){
		cin >> x;
		fruit.push(x);
	}

	i64 res = 0;
	while(fruit.size() > 1){
		int a,b;
		a = fruit.top();
		fruit.pop();
		b = fruit.top();
		fruit.pop();
		fruit.push(a + b);
		res += a + b;
	}
	cout << res << endl;
	return 0;
}